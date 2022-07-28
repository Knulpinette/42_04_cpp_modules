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
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
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
	std::cout << name << " is high-fiving the Gate." << std::endl;
}