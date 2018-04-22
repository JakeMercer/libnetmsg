/** 
* @file foo.hpp 
* @brief This header contains stuff
*
* @author Jake Mercer
*
* @date 08/04/2018
*/

#ifndef FOO_HPP
#define FOO_HPP

#include <iostream>

/**
* This function prints bar.
* @author Jake Mercer
* @date 08/04/2018
*/
inline void bar()
{
    std::cout << "bar" << std::endl;
}

/**
* This function prints stuff.
* @author Jake Mercer
* @date 08/04/2018
*/
int foo();

#endif
