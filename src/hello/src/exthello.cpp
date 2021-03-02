#include <iostream>
#include <string>
#include <cstring>
#include "hello.h"
#include "foobar.h"

static void effectCb(ActObj *me);

ExtHello::ExtHello() 
{
    ActObj::effect = effectCb;
    foobar_set(static_cast<ActObj*>(this));
    foobar_print();
}

static void
effectCb(ActObj *me)
{
    reinterpret_cast<ExtHello*>(me)->effect();
}

void
ExtHello::effect() const
{
    std::cout << "I'm effect()" <<  std::endl;
}
