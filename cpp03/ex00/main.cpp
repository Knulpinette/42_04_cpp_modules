#include "ClapTrap.hpp"

int main()
{
	ClapTrap	humonculus;
	ClapTrap	mustang("Mustang");
	ClapTrap	amstrong("Amstrong");
	ClapTrap	edward("Edward");

	humonculus.attack("Edward");
	humonculus.attack("Amstrong");
	humonculus.attack("Mustang");
	edward.takeDamage(6);
	amstrong.takeDamage(4);
	mustang.takeDamage(2);
	mustang.beRepaired(1);

	humonculus.attack("Edward");
	humonculus.attack("Amstrong");
	edward.takeDamage(4);
	amstrong.takeDamage(4);
	mustang.beRepaired(4);
	
	humonculus.attack("Mustang");
	mustang.takeDamage(10);
	mustang.beRepaired(10);
}