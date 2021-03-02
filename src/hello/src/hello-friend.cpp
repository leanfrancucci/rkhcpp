#include <iostream>
#include <string>
#include <cstring>
#include "hello.h"
#include "foobar.h"

void effectCb(ActObj *me);

Hello::Hello() 
{
    std::strcpy(name, "no-name");
    id = 0;
    ActObj::effect = effectCb;
    foobar_set(static_cast<ActObj*>(this));
    foobar_print();
}

Hello::Hello(const std::string inname, int inid) 
{
    if (inname.length() > 0 && inname.length() < 16)
    {
        std::strcpy(name, inname.c_str());
    }
    id = inid;
}

int
Hello::print() const
{
    std::cout << "offset of \'this\' = " << 
        std::addressof(*this) << std::endl;
    std::cout << "offset of \'counter\' = " << 
        std::addressof(counter) << std::endl;
    std::cout << "offset of \'id\' = " << 
        std::addressof(id) << std::endl;
    std::cout << "offset of \'name\' = " << 
        std::addressof(name) << std::endl;
    std::cout << "id = " << id << std::endl;
    std::cout << "name = \"" << name << "\"" <<  std::endl;
    return 0;
}

void
effectCb(ActObj *me)
{
    reinterpret_cast<Hello*>(me)->effect();
}

void
Hello::effect() const
{
    std::cout << "I'm effect()" <<  std::endl;
}
