#include "DiamondTrap.hpp"

int main()
{
	ScavTrap	humonculus;
	ScavTrap	mustang("Mustang");
	ScavTrap	edward("Edward");
	FragTrap	alphonse("Alphonse");
	ClapTrap	winry("Winry");
	ScavTrap	hughes("Hugues");
	ScavTrap	maes(hughes);
	std::cout << std::endl
				<< std::endl;

	winry.attack("Humonculus");
	winry.takeDamage(10);
	std::cout << std::endl
				<< std::endl;

	humonculus.attack("Edward");
	humonculus.attack("Alphonse");
	humonculus.attack("Mustang");
	edward.takeDamage(20);
	alphonse.takeDamage(10);
	mustang.takeDamage(2);
	mustang.beRepaired(1);
	std::cout << std::endl
				<< std::endl;

	humonculus.attack("Edward");
	humonculus.attack("Alphonse");
	edward.takeDamage(4);
	alphonse.takeDamage(4);
	alphonse.beRepaired(4);
	std::cout << std::endl
				<< std::endl;
	
	humonculus.attack("Mustang");
	mustang.takeDamage(10);
	mustang.beRepaired(10);
	mustang.guardGate();
	std::cout << std::endl
				<< std::endl;

	alphonse.attack("Humonculus");
	humonculus.takeDamage(100);
	alphonse.highFivesGuys();
	std::cout << std::endl
				<< std::endl;


	DiamondTrap	hawkeye("Hawkeye");
	DiamondTrap	riza(hawkeye);
	DiamondTrap	stone;
	std::cout << std::endl
				<< std::endl;

	humonculus.attack("Hawkeye");
	hawkeye.takeDamage(20);
	riza.attack("Humonculus");
	hawkeye.beRepaired(20);
	stone.guardGate();
	hawkeye.highFivesGuys();
	hawkeye.whoAmI();
	std::cout << std::endl
				<< std::endl;


}