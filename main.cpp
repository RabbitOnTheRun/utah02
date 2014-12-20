/* 
 * File:   main.cpp
 * Author: ntanaka
 *
 * Created on 2014/11/22, 2:12
 */

#include <cstdlib>
#include <vector>
#include <string>

#include <unistd.h>

#include "jsonMapper/ProcessMapper.h"
#include "ComponentSample1.h"
#include "MessageWithInPort.h"
#include "Log.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::string path_ = ".";
    std::string fileName_ = "Process.txt";
    std::string portMap_ = "PortMap.txt";
    std::string actor_ = "actor";
    if (2 <= argc) {
        path_ = argv[1]; //"cruise";
    }
    if (3 <= argc) {
        fileName_ = argv[2]; // "Process.txt";
    }
    if (4 <= argc) {
        portMap_ = argv[3];
    }
    if (5 <= argc) {
        actor_ = argv[4];
    }
    delete utah::Log::sequence;
    delete utah::Log::function;
    utah::Log::sequence = new utah::Log(path_ + "/sequenceLog.txt");
    utah::Log::function = new utah::Log(path_ + "/functionCallLog.txt");
    utah::Process* processP = jsonMapper::ProcessMapper::create(path_, fileName_, portMap_);

    std::map<const utah::Symbol*, utah::Thread*> threadMap = processP->getThreadMap();

    for (std::pair<const utah::Symbol*, utah::Thread*> symbolThreadPair : threadMap) {
        //utah::Thread* thread = symbolThreadPair.second;
        utah::ComponentIF* component = new utah::ComponentSample1();
        //thread.setComponent(std::string& stateMachineName_, ComponentIF* component_) {

        std::string name = symbolThreadPair.first->getName();

        processP->setComponent(name, name, component);
        //usleep(1000); // ugly
    }

    /*
    std::vector<std::string> threads = {"CRUISECONTROLLER", "INPUTSPEED", "SENSORSCAN", "SPEC", "SPEEDCONTROL"};
    for (std::string name : threads) {
        utah::ComponentIF* component = new utah::ComponentSample1();
        processP->setComponent(name, name, component);
        usleep(1000); // ugly
    } */
    utah::InPort inPort(actor_, actor_, actor_); //{"port" : "z" , "stateMachine" : "StateMachine1" , "thread" : "threadA"} 
    utah::Message message("start", "NULL");
    utah::MessageWithInPort messageWithInPort(message, inPort);

    //utah::Log::sequence.message("main", inPort.stateMachine, message.getMessageName());
    processP->push(messageWithInPort);

    //void push(MessageWithInPort messageWithInPort_);
    /*utah::InPort inPort3("SPEC","SPEC","SPEC");
    utah::Message message3("engineOn", "NULL");
    utah::MessageWithInPort messageWithInPort3(message3, inPort3);
    processP->push(messageWithInPort3);
    usleep(1000); */ // ugly
    /*
        utah::InPort inPort2("CRUISECONTROLLER", "CRUISECONTROLLER", "CRUISECONTROLLER");
        utah::Message message2("engineOn", "NULL");
        utah::MessageWithInPort messageWithInPort2(message2, inPort2);
        utah::Log::sequence.message("main", inPort2.stateMachine, message2.getMessageName());
        processP->push(messageWithInPort2);
        usleep(1000); // ugly

        utah::InPort inPort3("CRUISECONTROLLER", "CRUISECONTROLLER", "CRUISECONTROLLER");
        utah::Message message3("on", "NULL");
        utah::MessageWithInPort messageWithInPort3(message3, inPort3);
        utah::Log::sequence.message("main", inPort3.stateMachine, message3.getMessageName());
        processP->push(messageWithInPort3);
        usleep(10000); // ugly

        utah::InPort inPort4("CRUISECONTROLLER", "CRUISECONTROLLER", "CRUISECONTROLLER");
        utah::Message message4("off", "NULL");
        utah::MessageWithInPort messageWithInPort4(message4, inPort4);
        utah::Log::sequence.message("main", inPort4.stateMachine, message4.getMessageName());
        processP->push(messageWithInPort4);
        usleep(1000); // ugly
     */
    //usleep(10000);
    //processP->done();
    processP->join();
    delete utah::Log::sequence;
    delete utah::Log::function;
    return 0;
}

