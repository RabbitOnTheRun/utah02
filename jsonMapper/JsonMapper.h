/* 
 * File:   JsonMapper.h
 * Author: ntanaka
 *
 * Created on 2014/11/29, 20:26
 */

#ifndef JSONMAPPER_H
#define	JSONMAPPER_H

namespace jsonMapper {

    class JsonMapper {
    public:
        JsonMapper();
        // JsonMapper(const JsonMapper& orig);
        virtual ~JsonMapper();
        
        //virtual ~PicoJsonHelper();
        /*std::string readData(std::string fileName);
        picojson::value convertStringToPicoJsonObject(std::string serializedObj);
        picojson::value JSONFileToObj(std::string fileName);
        std::string getString(const picojson::value& value, std::string name);
        picojson::value getObject(const picojson::value& value, std::string name);
        picojson::array getArray(const picojson::value& value, std::string name);
*/
    private:

    };
}
#endif	/* JSONMAPPER_H */

