#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib> // srand, rand
#include <time.h> // time

class Base {
    public:
        Base();
        virtual ~Base();
};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif