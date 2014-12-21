/* 
 * File:   Result.h
 * Author: ntanaka
 *
 * Created on 2014/12/09, 0:29
 */

#ifndef RESULT_H
#define	RESULT_H

#include <string>
#include <memory>
#include "Symbol.h"
#include "Value.h"
namespace utah {

    class Result {
    public:
        Result(const Symbol* resultCode_);
        Result(const std::string resultCode_);
        //Result(const Result& orig);
        virtual ~Result();
        const Symbol* resultCode;
        std::shared_ptr<Value> value;

        static Result success;
        static Result error;
        static Result null;
    private:

    };
}
#endif	/* RESULT_H */

