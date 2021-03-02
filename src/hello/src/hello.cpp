#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
#include "hello.h"
#include "foobar.h"

static void effectCb(ActObj *me);

Hello::Hello() 
{
    std::strcpy(name, "no-name");
    id = 0;
    counter = id;
    ActObj::effect = effectCb;
}

Hello::Hello(const std::string inname, int inid) 
{
    if (inname.length() > 0 && inname.length() < 16)
    {
        std::strcpy(name, inname.c_str());
    }
    id = inid;
    counter = id;
    ActObj::effect = effectCb;
}

int
Hello::print() const
{
    /* Both conversions are valid */
    ActObj *ao = static_cast<ActObj*>(const_cast<Hello*>(this));
    std::cout << "*ao is: " << typeid(*ao).name() << std::endl;
    foobar_set(ao);
/*  foobar_set(dynamic_cast<ActObj*>(const_cast<Hello*>(this))); */
    foobar_print();
    std::cout << std::endl;
    return 0;
}

static void
effectCb(ActObj *me)
{
    Hello *realMe = static_cast<Hello*>(me);
    std::cout << "*realMe is: " << typeid(*realMe).name() << std::endl;
    realMe->effect();
}

void
Hello::effect() const
{
    std::cout << "I'm effect()" << std::endl;
}

void
HelloX::effect() const
{
    std::cout << "I'm effect() X" << std::endl;
}
