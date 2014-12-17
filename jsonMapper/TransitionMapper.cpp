/* 
 * File:   TransitionMapper.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 21:16
 */
#include "PicoJsonIF.h"
#include "TransitionMapper.h"
#include "MessageReceptionMapper.h"
#include "GuardMapper.h"
#include "MethodInvocationMapper.h"
#include "ResultHandlingMapper.h"

namespace jsonMapper {

    TransitionMapper::TransitionMapper() {
    }

    //TransitionMapper::TransitionMapper(const TransitionMapper& orig) {
    //}

    TransitionMapper::~TransitionMapper() {
    }

    utah::Transition* TransitionMapper::create(const picojson::value& obj) {
        std::string strFrom = PicoJsonIF::getString(obj, "from");
        std::string strTo = PicoJsonIF::getString(obj, "to");
        //picojson::value& messageObj = PicoJsonIF::getObject(obj, "message");
        //utah::Transition* result = new utah::Transition(strFrom, strTo);
        //MessageReceptionMapper::create(messageObj));
        utah::MessageReception messageReception = 
                MessageReceptionMapper::create(PicoJsonIF::getObject(obj, "message"));
        //result->setMessageReception(MessageReceptionMapper::create(
        //        PicoJsonIF::getObject(obj, "message")
        //        ));
        utah::Guard guard =GuardMapper::create( PicoJsonIF::getObject(obj, "guard"));
        utah::MethodInvocation methodInvocation = 
                MethodInvocationMapper::create(PicoJsonIF::getObject(obj, "methodInvocation"));
        
        utah::Transition* result = new utah::Transition(strFrom, strTo, messageReception, guard, methodInvocation);
        //result->setGuard(GuardMapper::create(
          //      PicoJsonIF::getObject(obj, "guard")
            //    ));
        //result->setMethodInvocation(MethodInvocationMapper::create(
          //      PicoJsonIF::getObject(obj, "methodInvocation")
           //     ));
        ResultHandlingMapper::create(PicoJsonIF::getArray(obj, "resultHandling"), *result);
        return result;
    }
}