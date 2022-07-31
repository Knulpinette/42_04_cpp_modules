#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon &newWeapon)
        : name(newName), weapon(newWeapon) 
        // newWeapon needs to be initialised right away as it cannot be NULL
{}

HumanA::~HumanA(){}

void    HumanA::attack() const
{
    std::cout << name
                << "  attacks with his "
                << weapon.getType()
                // type is a private variable and can only be accessed with a public function
                << std::endl;
}