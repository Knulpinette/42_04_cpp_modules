#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
        Weapon club = Weapon("crude spiked club");

        HumanA bobby("Bobby", club);
        bobby.attack();
        club.setType("other type of club");
        bobby.attack();
 
        Weapon knife = Weapon("super sharp knife");

        HumanB sam("Sam");
        sam.setWeapon(knife);
        sam.attack();
        knife.setType("other type of knife");
        sam.attack();

        HumanB dean("Dean");
        dean.attack();
}