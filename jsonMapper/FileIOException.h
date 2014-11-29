/* 
 * File:   FileIOException.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 21:06
 */

#ifndef FILEIOEXCEPTION_H
#define	FILEIOEXCEPTION_H

#include <string>
#include <exception>

namespace jsonMapper {

    class FileIOException : public std::exception {
    public:
        FileIOException();
        FileIOException(const FileIOException& orig);
        virtual ~FileIOException();
        FileIOException(std::string message_);
        std::string getMessage();
    private:
        std::string message;
    };
}


#endif	/* FILEIOEXCEPTION_H */

