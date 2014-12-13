/* 
 * File:   ComponentSample1.h
 * Author: ntanaka
 *
 * Created on 2014/12/13, 23:57
 */

#ifndef COMPONENTSAMPLE1_H
#define	COMPONENTSAMPLE1_H

#include "ComponentIF.h"
namespace utah {

    class ComponentSample1 : public ComponentIF {
    public:
        ComponentSample1();
        //ComponentSample1(const ComponentSample1& orig);
        virtual ~ComponentSample1();
    private:
        void setupGuard();
        void setupAction();
    };
}
#endif	/* COMPONENTSAMPLE1_H */

