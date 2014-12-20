/* 
 * File:   Log.cpp
 * Author: ntanaka
 * 
 * This log code is derived from KjellKod's log impl
 * Created on 2014/12/11, 0:51
 */

#include <string>
#include <iostream>
#include <mutex>
#include "Log.h"
#include "jsonMapper/FileIOException.h"
namespace utah {

    Log* Log::sequence = new Log("sequenceLog.txt");
    Log* Log::function = new Log("functionCallLog.txt");

    //Log Log::sequence;
    //Log Log::function;
    
    Log::Log() {
    }

    //Log::Log(const Log& orig) {
    //}

    Log::~Log() {
        write("\n@enduml\n");
    }

    Log::Log(const std::string fileName) {
        ofs.open(fileName);
        if (ofs.fail()) {
            throw jsonMapper::FileIOException(" (NOT JSON Exception) Log::Log() : cannot open file, fileName = " + fileName);
            // should be avoid dual direction dependency
        }
        write("@startuml\n");
    }

    void Log::message(const std::string from, const Symbol* to, const Symbol* event) {
        write(from + " -> " + to->getName() + " : " + event->getName() + "\n");
    }

    void Log::message(const Symbol* from, const Symbol* to, const Symbol* event) {
        write(from->getName() + " -> " + to->getName() + " : " + event->getName() + "\n");
    }

    void Log::state(std::string stateMachine, const Symbol* state) {
        write("hnote over " + stateMachine + " : " + state->getName() + "\n");
    }

    void Log::methodCall(std::string file, std::string functionName) {
        write(file + "::" + functionName + " called\n");
    }

    void Log::line(std::string file, std::string functionName, int lineNum) {
        write(file + "::" + functionName + "::" + /*std::to_string(lineNum) + */ " visited\n");
    }

    void Log::value(std::string file, std::string functionName, std::string valueName, std::string value) {
        write(file + "::" + functionName + "::" + valueName + " = " + value + "\n");
    }

    void Log::close() {
        ofs.close();
    }

    void Log::error(std::string file, std::string errorMessage) {
        write(file + "::" + errorMessage + " \n");
    }

    void Log::write(std::string message) {
        std::lock_guard<std::mutex> m_v(mutexVar);
        ofs << message; // mutex please
        ofs.flush();
    }

}