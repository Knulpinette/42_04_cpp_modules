#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::name = "philosopherStone_clap_name";
	name = ClapTrap::name;
	hitpoints = FragTrap::hitpoints;
	energypoints = ScavTrap::energypoints;
	attackdamage = FragTrap::attackdamage;
	std::cout << "Default constructor called for DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap( std::string newName)
		: 	name(newName + "_clap_name")
{
	ClapTrap::name = name;
	hitpoints = FragTrap::hitpoints;
	energypoints = ScavTrap::energypoints;
	attackdamage = FragTrap::attackdamage;
	std::cout << "Name constructor called for DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& valueToCopy)
		: name(valueToCopy.name) 
{
	ClapTrap::name = name;
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Copy constructor called for DiamondTrap " << name << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& valueToCopy)
{
	ClapTrap::name = valueToCopy.name + "_clap_name";
	name = ClapTrap::name;
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
	std::cout << "I am " << DiamondTrap::name << " and ClapTrap " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack( std::string const &target )
{
	std::cout << "[THE SCAVTRAP VERSION] ";
	this->ScavTrap::attack( target );
}