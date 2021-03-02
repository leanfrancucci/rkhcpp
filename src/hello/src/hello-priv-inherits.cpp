#include <iostream>
#include <string>
#include <cstring>
#include "hello.h"

Hello::Hello() 
{
    std::strcpy(name, "no-name");
    id = 0;
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
    std::cout << "id = " << id << std::endl;
    std::cout << "name = \"" << name << "\"" <<  std::endl;
    return 0;
}
