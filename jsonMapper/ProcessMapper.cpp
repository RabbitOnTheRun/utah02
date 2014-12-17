/* 
 * File:   ProcessMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 1:38
 */

#include "ProcessMapper.h"
#include "PicoJsonIF.h"
#include "ThreadMapper.h"
#include "PortMapMapper.h"

namespace jsonMapper {

    ProcessMapper::ProcessMapper() {
    }

    //ProcessMapper::ProcessMapper(const ProcessMapper& orig) {
    //}

    ProcessMapper::~ProcessMapper() {
    }

    utah::Process* ProcessMapper::create(
            std::string path_, std::string processFileName_, std::string portMapFileName_) {

        const picojson::value& obj2 = PicoJsonIF::JSONFileToObj(path_ + "/" + portMapFileName_);
        // reconsider filename convention
        utah::PortMap portMap = PortMapMapper::create(obj2);
        utah::Process* process = new utah::Process(portMap);

        const picojson::value& obj = PicoJsonIF::JSONFileToObj(path_ + "/" + processFileName_);
        const picojson::array& threads = PicoJsonIF::getArray(obj, "process");

        for (const picojson::value& obj3 : threads) {
            utah::Thread* thread = ThreadMapper::create(path_, obj3);
            process->addThread(thread->name->getName(), thread);
            thread->setProcess(process);
        }

        //process->portMap = portMap;
        return process;
    }
}
