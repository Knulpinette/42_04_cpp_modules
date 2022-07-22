#include "HumanB.hpp"

HumanB::HumanB( std::string newName)
        : name(newName), weapon(0)
{}

HumanB::~HumanB(){}

void    HumanB::setWeapon ( Weapon &newWeapon )
{
    weapon = &newWeapon;
}

void    HumanB::attack()
{
    std::cout << name
                << " attacks with his ";
    if (weapon)
        std::cout << weapon->getType() << std::endl;
    else
        std::cout << " fists" << std::endl;
}