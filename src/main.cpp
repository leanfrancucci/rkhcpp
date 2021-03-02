#include <iostream>
#include <cstddef>
#include "foocfg.h"
#include "hello.h"
#include "foobar.h"
#include "foozap.h"

int
main(int argc, char *argv[])
{
    Hello hello("hello", 1);
    HelloX helloX;
    
    /* Test mixt C and C++ */
    std::cout << "Hi, I'm main.cpp file" << std::endl;
    foozap_print();

    /* Play with structure and class memory layouts */
    hello.print();
    helloX.print();
    return 0;
}
