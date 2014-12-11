/* 
 * File:   ThreadMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 1:41
 */

#include <vector>
#include <memory>
#include "ThreadMapper.h"
#include "PicoJsonIF.h"
#include "../StateMachine.h"
#include "StateMachineMapper.h"
#include "../EventQueue.h"

namespace jsonMapper {

    ThreadMapper::ThreadMapper() {
    }

    //ThreadMapper::ThreadMapper(const ThreadMapper& orig) {
    //}

    ThreadMapper::~ThreadMapper() {
    }

    utah::Thread* ThreadMapper::create(const picojson::value& obj) {
        std::string threadName = PicoJsonIF::getString(obj, "thread");
        utah::Thread* thread = new utah::Thread(threadName);
        const picojson::array& stateMachines = PicoJsonIF::getArray(obj, "stateMachine");

        for (const picojson::value& obj : stateMachines) {
            std::string stateMachineName = obj.to_str();
            utah::StateMachine* stateMachine = StateMachineMapper::create(stateMachineName, threadName);
            thread->addStateMachine(stateMachineName, stateMachine);
        }

        std::shared_ptr<utah::EventQueue> eventQueue(new utah::EventQueue());
        thread->setEventQueue(eventQueue);
        //thread->setEventQueue(std::shared_ptr<EventQueue>(new utah::EventQueue()));
        thread->start();
        return thread;
    }
}
