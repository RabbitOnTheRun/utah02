/* 
 * File:   JsonFormatException.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 20:55
 */

#ifndef JSONFORMATEXCEPTION_H
#define	JSONFORMATEXCEPTION_H
#include <string>
#include <exception>

namespace jsonMapper {

    class JsonFormatException : public std::exception {
    public:
        JsonFormatException();
        //JsonFormatException(const JsonFormatException& orig);
        virtual ~JsonFormatException() throw() {};
        JsonFormatException(std::string message_);
        std::string getString();
    private:
        std::string message;
    };
}
#endif	/* JSONFORMATEXCEPTION_H */

