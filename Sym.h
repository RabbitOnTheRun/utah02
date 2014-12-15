/* 
 * File:   Sym.h
 * Author: ntanaka
 *
 * Created on 2014/12/08, 1:19
 */

#ifndef SYM_H
#define	SYM_H

#include "Symbol.h"

namespace utah {

    class Sym {
    public:
        Sym();
        //Sym(const Sym& orig);
        virtual ~Sym();

        static Symbol* Null;
        static Symbol* done;
        static Symbol* start;
    private:

    };
}
#endif	/* SYM_H */

