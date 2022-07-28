#include "ScavTrap.hpp"

int main()
{
	ScavTrap	humonculus;
	ScavTrap	mustang("Mustang");
	ScavTrap	edward("Edward");
	ScavTrap	alphonse("Alphonse");
	ClapTrap	winry("Winry");
	ScavTrap	hughes("Hugues");
	ScavTrap	copy(hughes);

	winry.attack("Humonculus");
	winry.takeDamage(10);

	humonculus.attack("Edward");
	humonculus.attack("Alphonse");
	humonculus.attack("Mustang");
	edward.takeDamage(20);
	alphonse.takeDamage(10);
	mustang.takeDamage(2);
	mustang.beRepaired(1);

	humonculus.attack("Edward");
	humonculus.attack("Alphonse");
	edward.takeDamage(4);
	alphonse.takeDamage(4);
	mustang.beRepaired(4);
	
	humonculus.attack("Mustang");
	mustang.takeDamage(10);
	mustang.beRepaired(10);
	mustang.guardGate();

	alphonse.attack("Humonculus");
	humonculus.takeDamage(100);
}