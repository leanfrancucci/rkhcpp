#include <iostream>
#include <string>
#include <cstring>
#include "hello.h"
#include "foobar.h"

static void effectCb(ActObj *me);

Hello::Hello() 
{
    std::strcpy(ao.name, "no-name");
    ao.id = 0;
    ao.effect = effectCb;
    foobar_set(&this->ao);
    foobar_print();
}

Hello::Hello(const std::string name, int id) 
{
    if (name.length() > 0 && name.length() < 16)
    {
        std::strcpy(ao.name, name.c_str());
    }
    ao.id = id;
}

int
Hello::print() const
{
    std::cout << "offset of \'ao\' = " << offsetof(Hello, ao) << std::endl;
    std::cout << "id = " << ao.id << std::endl;
    std::cout << "name = \"" << ao.name << "\"" <<  std::endl;
    return 0;
}

static void
effectCb(ActObj *me)
{
    reinterpret_cast<Hello*>(me)->effect();
}

void
Hello::effect() const
{
    std::cout << "I'm effect()" <<  std::endl;
}
