/* 
 * File:   FileIOException.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 21:06
 */

#include "FileIOException.h"


namespace jsonMapper {

    FileIOException::FileIOException() {
    }

    FileIOException::FileIOException(const FileIOException& orig) {
    }

    FileIOException::~FileIOException() {
    }

    FileIOException::FileIOException(std::string message_) {
        message = message_;
    }

    std::string FileIOException::getMessage() {
        return message;
    }
}