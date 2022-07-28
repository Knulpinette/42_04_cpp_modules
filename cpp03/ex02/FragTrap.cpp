#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::string	humonculus[] = {"Lust", "Greed", "Sloth", "Wrath", "Gluttony", "Pride", "Envy"};

	name = humonculus[rand() % 7 + 1];
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
	std::cout << "Default constructor called for FragTrap " << name << std::endl;
}

FragTrap::FragTrap( std::string name)
		: ClapTrap(name)
{
	std::cout << "Name constructor called for FragTrap " << name << std::endl;
}

FragTrap::FragTrap( const FragTrap& valueToCopy)
		: ClapTrap(valueToCopy.name) // this allows to construct a ClapTrap - else it will only construct the FragTrap.
{
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Copy constructor called for FragTrap " << name << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& valueToCopy)
{
	name = valueToCopy.name;
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Assignation called for FragTrap " << name << std::endl;
	return (*this);

}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap " << name << std::endl;
}

void 	FragTrap::highFivesGuys(void)
{
	https://bluebrain.github.io/HighFive/poster/
	https://github.com/BlueBrain/HighFive
	HDF5 => header.
	The specific function for FragTrap will be void highFivesGuys(void) and will dis-
	play a positive high fives request on the standard output.
}