/* 
 * File:   PersistentDataIF.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 20:36
 */

#ifndef PICOJSONIF_H
#define	PICOJSONIF_H

#include "picojson.h"
namespace jsonMapper {

    class PicoJsonIF {
    public:
        PicoJsonIF();
        //PersistentDataIF(const PersistentDataIF& orig);
        virtual ~PicoJsonIF();
        static std::string readData(std::string fileName);
        static picojson::value convertStringToPicoJsonObject(std::string serializedObj);
        static picojson::value JSONFileToObj(std::string fileName);
        static std::string getString(const picojson::value& value, std::string name);
        static picojson::value getObject(const picojson::value& value, std::string name);
        static picojson::array getArray(const picojson::value& value, std::string name);
        static picojson::array toArray(const picojson::value& obj) ;
    private:
        //const picojson::value& value;
    };
}
#endif	/* PICOJSONIF_H */

