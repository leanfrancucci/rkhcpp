#ifndef __HELLO_H__
#define __HELLO_H__

#include <string>
#include "foobar.h"

class Hello: ActObj
{
    int counter;
    void effect() const;
    friend void effectCb(ActObj *me);
    public:
        Hello();
        Hello(const std::string name, int id);
        int print() const;
};

#endif
