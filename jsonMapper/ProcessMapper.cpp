/* 
 * File:   ProcessMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/12/11, 1:38
 */

#include "ProcessMapper.h"
#include "PicoJsonIF.h"
#include "ThreadMapper.h"

namespace jsonMapper {

    ProcessMapper::ProcessMapper() {
    }

    //ProcessMapper::ProcessMapper(const ProcessMapper& orig) {
    //}

    ProcessMapper::~ProcessMapper() {
    }

    utah::Process* ProcessMapper::create(std::string path_, std::string fileName_) {
        const picojson::value& obj = PicoJsonIF::JSONFileToObj(path_ + "/" + fileName_);
        const picojson::array& threads =  PicoJsonIF::getArray(obj, "process");
        
        utah::Process* process = new utah::Process();
        
        for (const picojson::value& obj : threads) {
            utah::Thread* thread = ThreadMapper::create(path_, obj);
        }
        return process;
    }
}
