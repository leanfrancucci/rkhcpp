#ifndef __HELLO_H__
#define __HELLO_H__

#include <string>
#include "foobar.h"

class Hello
{
    ActObj ao;
    int counter;
    public:
    Hello();
    Hello(const std::string name, int id);
    int print() const;
    void effect() const;
};

#endif
