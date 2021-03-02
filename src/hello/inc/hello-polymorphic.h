#ifndef __HELLO_H__
#define __HELLO_H__

#include <string>
#include "foobar.h"

class Hello: public ActObj
{
    int counter;
    public:
        Hello();
        Hello(const std::string name, int id);
        int print() const;
        virtual void effect() const;
};

class HelloX: public Hello
{
    public:
        void effect() const;
};

#endif
