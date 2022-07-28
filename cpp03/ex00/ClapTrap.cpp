#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
		: name("randomHumonculus"),
			hitpoints(10),
			energypoints(10),
			attackdamage(0)
{
	std::cout << "Default constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap( std::string newName )
			: name(newName),
				hitpoints(10),
				energypoints(10),
				attackdamage(0)
{
	std::cout << "Name constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& valueToCopy )
		: name(valueToCopy.name),
			hitpoints(valueToCopy.hitpoints),
			energypoints(valueToCopy.energypoints),
			attackdamage(valueToCopy.attackdamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap &valueToCopy )
{
	name = valueToCopy.name;
	hitpoints = valueToCopy.hitpoints;
	energypoints = valueToCopy.energypoints;
	attackdamage = valueToCopy.attackdamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << name << std::endl;
}

void 		ClapTrap::attack(std::string const & target)
{
	std::cout << "[ATTACKING]" << std::endl;
	if (!energypoints || !hitpoints)
	{
		if (!energypoints)
		{
			std::cout << name
					<< " has already died. Unless they're a zombie...?"
					<< std::endl;
		}
		else
		{
			std::cout << name
				<< " has no more hitpoints to attack!"
				<< std::endl;
		}
		return ;
	}
	std::cout << name
				<< " attacks " << target
				<< ", causing " << attackdamage
				<< " points of damage!"
				<< std::endl;
	hitpoints--;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[TAKING DAMAGE]" << std::endl;
	if (energypoints == 0)
	{
		std::cout << name
				<< " has already died. You're going a bit overboad."
				<< std::endl;
		return ;
	}
	if (energypoints - amount <= 0)
		amount = energypoints;
	std::cout << name
				<< " takes " << amount
				<< " points of damage!"
				<< std::endl;
	energypoints -= amount;
	if (energypoints <= 0)
	{
		energypoints = 0;
		std::cout << name
				<< " has died."
				<< std::endl;
	}
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	int	amount2;

	amount2 = amount;
	std::cout << "[REPAIRING]" << std::endl;
	if (energypoints == 0 && !amount)
	{
		std::cout << name
				<< " is still dead."
				<< std::endl;
		return ;
	}
	else if (energypoints == 0 && amount)
	{
		std::cout << name
				<< " has been ressucitated."
				<< std::endl;
	}
	if (amount + energypoints > 10)
	{
		amount = 10 - energypoints;
		if (amount < 0)
			amount = 0;
	}
	if (amount2 + hitpoints > 10)
	{
		amount2 = 10 - hitpoints;
		if (amount2 < 0)
			amount2 = 0;
	}
	std::cout << name
				<< " heals " << amount
				<< " points of damage"
				<< " and restores " << amount2
				<< " hitpoints!"
				<< std::endl;
	energypoints += amount;
	hitpoints += amount;
}