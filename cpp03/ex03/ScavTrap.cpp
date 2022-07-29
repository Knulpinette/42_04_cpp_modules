#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	name = "Humonculus";
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
	std::cout << "Default constructor called for ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap( std::string name)
		: ClapTrap(name)
{
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
	std::cout << "Name constructor called for ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& valueToCopy)
		: ClapTrap(valueToCopy.name) // this allows to construct a ClapTrap - else it will only construct the ScavTrap.
{
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Copy constructor called for ScavTrap " << name << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& valueToCopy)
{
	name = valueToCopy.name;
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	std::cout << "Assignation called for ScavTrap " << name << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap " << name << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "[GATEKEEPER MODE]"
				<< std::endl;
	std::cout << "ScavTrap " << name 
				<< " has entered GateKeeper mode."
				<< std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "[ATTACKING]" << std::endl;
	if (!energypoints || !hitpoints)
	{
		if (!hitpoints)
		{
			std::cout << " Scavtrap " << name
					<< " has already died. Unless they're a zombie...?"
					<< std::endl;
		}
		else
		{
			std::cout << name
				<< " has no more energy points to attack!"
				<< std::endl;
		}
		return ;
	}
	std::cout << " Scavtrap " << name
				<< " attacks " << target
				<< ", causing " << attackdamage
				<< " points of damage!"
				<< std::endl;
	hitpoints--;
}
