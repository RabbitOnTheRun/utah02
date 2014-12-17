/* 
 * File:   Log.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 0:51
 */

#ifndef LOG_H
#define	LOG_H

#include <string>
#include <fstream>
#include <mutex>
#include "Symbol.h"

namespace utah {

#define LOGFUNC Log::function.methodCall(__FILE__, __FUNCTION__)
#define LOGVALUE(name_, value_) Log::function.value(__FILE__, __FUNCTION__, name_, (value_));

    class Log {
    public:
        Log();
        Log(std::string fileName);
        //Log(const Log& orig);
        virtual ~Log();

        static Log sequence;
        static Log function;


        void message(std::string from, Symbol* to, Symbol* event);
        void state(std::string stateMachine, Symbol* state);
        void methodCall(std::string file, std::string functionName);
        void value(std::string file, std::string functionName, std::string valueName, std::string value);
        void close();

    private:
        void write(std::string message);
        std::ofstream ofs;
        std::mutex mutexVar;
    };
}
#endif	/* LOG_H */

