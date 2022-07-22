#include "HumanB.hpp"

HumanB::HumanB( std::string newName)
{
    name = newName;
    weapon = 0;
}

HumanB::HumanB(){}

void    HumanB::takesWeapon ( Weapon &newWeapon )
{
    weapon = newWeapon;
}

void    HumanB::attack()
{
    std::cout << name
                << " attacks with his "
    if (weapon)
        std::cout << weapon.type << std::endl;
    else
        std::cout << " fists" << std::endl;
}