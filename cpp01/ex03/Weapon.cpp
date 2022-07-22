#include "Weapon.hpp"

Weapon::Weapon(void){}
Weapon::~Weapon(void){}

void    Weapon::setType( std::string newType )
{
    type = newType;
}