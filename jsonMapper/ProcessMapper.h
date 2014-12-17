/* 
 * File:   ProcessMapper.h
 * Author: ntanaka
 *
 * Created on 2014/12/11, 1:38
 */

#ifndef PROCESSMAPPER_H
#define	PROCESSMAPPER_H

#include <string>
#include "../Process.h"
namespace jsonMapper {

    class ProcessMapper {
    public:
        ProcessMapper();
        //ProcessMapper(const ProcessMapper& orig);
       virtual ~ProcessMapper();
        static utah::Process* create(std::string path_, std::string processFileName_, std::string portMapFileName_);
    private:

    };
}
#endif	/* PROCESSMAPPER_H */

