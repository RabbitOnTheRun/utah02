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
    std::string fileName_ = "Process.txt";
    //jsonMapper::ProcessMapper processMapper;
    utah::Process* processP = jsonMapper::ProcessMapper::create("cruise", fileName_, "PortMap.txt");

    std::vector<std::string> threads = {"CRUISECONTROLLER", "INPUTSPEED", "SENSORSCAN", "SPEC", "SPEEDCONTROL"};
    for (std::string name : threads) {
        utah::ComponentIF* component = new utah::ComponentSample1();
        processP->setComponent(name, name, component);
        sleep(1); // ugly

        utah::InPort inPort(name, name, name); //{"port" : "z" , "stateMachine" : "StateMachine1" , "thread" : "threadA"} 
        utah::Message message("start", "NULL");
        utah::MessageWithInPort messageWithInPort(message, inPort);

        utah::Log::sequence.message("main", inPort.stateMachine, message.getMessageName());
        processP->push(messageWithInPort);
    }
    //void push(MessageWithInPort messageWithInPort_);
    /*utah::InPort inPort3("SPEC","SPEC","SPEC");
    utah::Message message3("engineOn", "NULL");
    utah::MessageWithInPort messageWithInPort3(message3, inPort3);
    processP->push(messageWithInPort3);
    sleep(1);*/ // ugly

    utah::InPort inPort2("CRUISECONTROLLER", "CRUISECONTROLLER", "CRUISECONTROLLER");
    utah::Message message2("engineOn", "NULL");
    utah::MessageWithInPort messageWithInPort2(message2, inPort2);
    utah::Log::sequence.message("main", inPort2.stateMachine, message2.getMessageName());
    processP->push(messageWithInPort2);
    sleep(1); // ugly

    utah::InPort inPort3("CRUISECONTROLLER", "CRUISECONTROLLER", "CRUISECONTROLLER");
    utah::Message message3("on", "NULL");
    utah::MessageWithInPort messageWithInPort3(message3, inPort3);
    utah::Log::sequence.message("main", inPort3.stateMachine, message3.getMessageName());
    processP->push(messageWithInPort3);
    sleep(1); // ugly

    utah::InPort inPort4("CRUISECONTROLLER", "CRUISECONTROLLER", "CRUISECONTROLLER");
    utah::Message message4("off", "NULL");
    utah::MessageWithInPort messageWithInPort4(message4, inPort4);
    utah::Log::sequence.message("main", inPort4.stateMachine, message4.getMessageName());
    processP->push(messageWithInPort4);
    sleep(1); // ugly

    processP->done();
    processP->join();
    return 0;
}

