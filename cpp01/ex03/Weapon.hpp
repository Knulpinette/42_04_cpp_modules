#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon(void);
        ~Weapon(void);
       
        void    setType(std::string type);
};

#endif