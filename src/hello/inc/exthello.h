#ifndef __EXTHELLO_H__
#define __EXTHELLO_H__

#include <string>
#include "foobar.h"

class ExtHello: protected ActObj
{
    int counter;
    public:
        ExtHello();
        void effect() const;
};

#endif
