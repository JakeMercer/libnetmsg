#include "config.h"
#include <foo.hpp>
#include <iostream>

int foo()
{
    std::cout << "Hello world from " << PACKAGE_STRING << std::endl;
#ifdef DEBUG
    std::cout << "I was compiled with DEBUG defined." << std::endl;
#else
    std::cout << "It does not look like DEBUG was defined when I was compiled." << std::endl;
#endif
    return 0;
}
