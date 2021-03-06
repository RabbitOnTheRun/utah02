/* 
 * File:   shared_queue.h
 * Author: ntanaka
 *
 * Created on 2014/12/03, 1:17
 */

#ifndef SHARED_QUEUE_H
#define	SHARED_QUEUE_H


#include <queue>
#include <mutex>
#include <exception>
#include <condition_variable>

namespace itc { // Inter Thread Communication

    /** Multiple producer, multiple consumer thread safe queue
     * Since 'return by reference' is used this queue won't throw */
    template<typename T>
    class shared_queue {
        std::queue<T> queue_;
        mutable std::mutex m_;
        std::condition_variable data_cond_;

        //shared_queue& operator=(const shared_queue&) = delete; //ntanaka
        //shared_queue(const shared_queue& other) = delete;
    private:

        shared_queue& operator=(const shared_queue&) {
        } ; //= delete; //ntanaka

        shared_queue(const shared_queue& other) {
        } ; // = delete;

    public:

        shared_queue() {
        }

        ~shared_queue() {
        }

        void push(T item) {
            std::lock_guard<std::mutex> lock(m_);
            queue_.push(item);
            data_cond_.notify_one();
        }

        /// \return immediately, with true if successful retrieval

        bool try_and_pop(T& popped_item) {
            std::lock_guard<std::mutex> lock(m_);
            if (queue_.empty()) {
                return false;
            }
            popped_item = queue_.front();
            queue_.pop();
            return true;
        }

        /// Try to retrieve, if no items, wait till an item is available and try again

        void wait_and_pop(T& popped_item) {
            std::unique_lock<std::mutex> lock(m_); // note: unique_lock is needed for std::condition_variable::wait
            while (queue_.empty()) { //                       The 'while' loop below is equal to
                data_cond_.wait(lock); //data_cond_.wait(lock, [](bool result){return !queue_.empty();});
            }
            popped_item = queue_.front();
            queue_.pop();
        }

        bool empty() const {
            std::lock_guard<std::mutex> lock(m_);
            return queue_.empty();
        }

        unsigned size() const {
            std::lock_guard<std::mutex> lock(m_);
            return queue_.size();
        }
    };
}

#endif	/* SHARED_QUEUE_H */

