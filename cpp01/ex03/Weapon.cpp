#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
    setType(newType);
}
Weapon::~Weapon(void){}

void    Weapon::setType( std::string newType )
{
    type = newType;
}

std::string Weapon::getType ()
{
    return (type);
}