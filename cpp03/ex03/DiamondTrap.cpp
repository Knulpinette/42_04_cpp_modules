#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	name = ClapTrap::name;
	hitpoints = FragTap::hitpoints;
	energypoints = ScavTap::energypoints;
	attackdamage = FragTap::attackdamage;
	std::cout << "Default constructor called for DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap( std::string name)
		: name + ClapTrap(name)
{
	hitpoints = FragTap::hitpoints;
	energypoints = ScavTap::energypoints;
	attackdamage = FragTap::attackdamage;
	std::cout << "Name constructor called for DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& valueToCopy)
		: ClapTrap(valueToCopy.name) // this allows to construct a ClapTrap - else it will only construct the DiamondTrap.
{
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Copy constructor called for DiamondTrap " << name << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& valueToCopy)
{
	name = valueToCopy.name;
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Assignation called for DiamondTrap " << name << std::endl;
	return (*this);

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called for DiamondTrap " << name << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondClap " << name << " and ClapTrap " << name << std::endl;
}