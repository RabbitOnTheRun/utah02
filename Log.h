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
#define LOGLINE Log::function.line(__FILE__, __FUNCTION__, __LINE__)
#define LOGVALUE(name_, value_) Log::function.value(__FILE__, __FUNCTION__, name_, (value_));
#define LOGERROR(error_) Log::function.error(__FILE__,(error_));

    class Log {
    public:
        Log();
        Log(std::string fileName);
        //Log(const Log& orig);
        virtual ~Log();

        static Log sequence;
        static Log function;


        void message(const std::string from, const Symbol* to, const Symbol* event);
        void message(const Symbol* from, const Symbol* to, const Symbol* event);
        void state(std::string stateMachine, const Symbol* state);
        void methodCall(std::string file, std::string functionName);
        void line(std::string file, std::string functionName, int lineNum);
        void value(std::string file, std::string functionName, std::string valueName, std::string value);
        void close();
        void error(std::string file, std::string errorMessage);

    private:
        void write(std::string message);
        std::ofstream ofs;
        std::mutex mutexVar;
    };
}
#endif	/* LOG_H */

