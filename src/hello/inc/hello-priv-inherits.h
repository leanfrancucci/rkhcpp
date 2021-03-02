#ifndef __HELLO_H__
#define __HELLO_H__

#include <string>
#include "exthello.h"

class Hello: ExtHello
{
    public:
        Hello();
        Hello(const std::string name, int id);
        int print() const;
};

#endif
