#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>

struct Data {
    bool        male;
    std::string type;
    std::string sound;
};

typedef unsigned long uintptr_t; // uintptr_t is only an existing type from C++11

uintptr_t   serialize(const Data* ptr);
Data*       deserialize(const uintptr_t raw);
void        printData( const Data &animal );

#endif