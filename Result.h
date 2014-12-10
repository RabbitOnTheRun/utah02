/* 
 * File:   Result.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:29
 */

#ifndef RESULT_H
#define	RESULT_H

#include <memory>
#include "Symbol.h"
#include "Value.h"
namespace utah {

    class Result {
    public:
        Result();
        //Result(const Result& orig);
        virtual ~Result();
        Symbol* resultCode;
        std::shared_ptr<Value> value;
    private:

    };
}
#endif	/* RESULT_H */
