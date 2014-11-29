/* 
 * File:   PersistentDataIF.cpp
 * Author: ntanaka
 * 
 * Created on 2014/11/29, 20:36
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <assert.h>

#include "FileIOException.h"
#include "JsonFormatException.h"
#include "PicoJsonIF.h"

namespace jsonMapper {

    PicoJsonIF::PicoJsonIF() {
    }

    //PersistentDataIF::PersistentDataIF(const PersistentDataIF& orig) {
    //}

    PicoJsonIF::~PicoJsonIF() {
    }

    std::string PicoJsonIF::readData(std::string fileName) {
        std::ifstream ifs(fileName, std::ifstream::in);
        //assert(!ifs.fail());

        if (ifs.fail()) {
            throw FileIOException("PicoJsonIF::readData() : cannot open file, fileName = " + fileName);
        }
        std::string contents;
        ifs.seekg(0, std::ios::end);
        contents.resize(ifs.tellg());
        ifs.seekg(0, std::ios::beg);
        ifs.read(&contents[0], contents.size());
        ifs.close();
        return (contents);
    }

    picojson::value PicoJsonIF::convertStringToPicoJsonObject(std::string serializedObj) {
        picojson::value obj;
        std::string err;

        picojson::parse(obj, serializedObj.begin(), serializedObj.end(), &err);
        if (!err.empty()) {
            std::cerr << err << std::endl;
            throw JsonFormatException("PicoJsonIF::convertStringToPicoJsonObject() : JSON parse failed, err = " + err);
        }
        return obj;
    }

    picojson::value PicoJsonIF::JSONFileToObj(std::string fileName) {
        std::string str = readData(fileName);
        return convertStringToPicoJsonObject(str);
    }

    std::string PicoJsonIF::getString(const picojson::value& value, std::string name) {
        picojson::value objString = value.get(name);
        if (objString.is<std::string>()) {
            return (objString.to_str());
        } else
            throw JsonFormatException("PicoJsonIF::getString() found illegal format : property name = " + name);
    }

    picojson::value PicoJsonIF::getObject(const picojson::value& value, std::string name) {

        picojson::value object = value.get(name);
        if (object.is<picojson::object>()) {
            return object;
        } else {
            throw JsonFormatException("PicoJsonIF::getObject() found illegal format : property name = " + name);
        }
    }

    picojson::array PicoJsonIF::getArray(const picojson::value& value, std::string name) {
        picojson::value obj = value.get(name);
        if (obj.is<picojson::array>()) {
            picojson::array arrayObj = obj.get<picojson::array>();
            return arrayObj;
        } else {
            throw JsonFormatException("PicoJsonIF::getArray() found illegal format : property name = " + name);
        }
    }
    
    picojson::array PicoJsonIF::toArray(const picojson::value& obj) {
        if (obj.is<picojson::array>()) {
            picojson::array arrayObj = obj.get<picojson::array>();
            return arrayObj;
        } else {
            throw JsonFormatException("PicoJsonIF::toArray() found illegal format ");
        }
    }
}