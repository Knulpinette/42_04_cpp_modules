#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
		: name("randomHumonculus"),
			hitpoints(10),
			energypoints(10),
			attackdamage(0)
{
	std::string	humonculus[] = {"Lust", "Greed", "Sloth", "Wrath", "Gluttony", "Pride", "Envy"};

	name = humonculus[rand() % 7 + 1];
	std::cout << "Default constructor called for ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap( std::string newName )
			: name(newName),
				hitpoints(10),
				energypoints(10),
				attackdamage(0)
{
	std::cout << "Name constructor called for ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& valueToCopy )
		: name(valueToCopy.name),
			hitpoints(valueToCopy.hitpoints),
			energypoints(valueToCopy.energypoints),
			attackdamage(valueToCopy.attackdamage)
{
	std::cout << "Copy constructor called for ClapTrap" << std::endl;
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
	std::cout << "Destructor called for ClapTrap " << name << std::endl;
}

void 		ClapTrap::attack(std::string const & target)
{
	std::cout << "[ATTACKING]" << std::endl;
	if (!energypoints || !hitpoints)
	{
		if (!hitpoints)
		{
			std::cout << " Claptrap " << name
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
	std::cout << " Claptrap " << name
				<< " attacks " << target
				<< ", causing " << attackdamage
				<< " points of damage!"
				<< std::endl;
	hitpoints--;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[TAKING DAMAGE]" << std::endl;
	if (hitpoints == 0)
	{
		std::cout << " Claptrap " << name
				<< " has already died. You're going a bit overboad."
				<< std::endl;
		return ;
	}
	if (hitpoints - amount <= 0)
		amount = hitpoints;
	std::cout << " Claptrap " << name
				<< " takes " << amount
				<< " points of damage!"
				<< std::endl;
	hitpoints -= amount;
	if (hitpoints <= 0)
	{
		hitpoints = 0;
		std::cout << " Claptrap " << name
				<< " has died."
				<< std::endl;
	}
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[REPAIRING]" << std::endl;
	if (hitpoints == 0 && !amount)
	{
		std::cout << " Claptrap " << name
				<< " is still dead."
				<< std::endl;
		return ;
	}
	else if (hitpoints == 0 && amount)
	{
		std::cout << " Claptrap " << name
				<< " has been ressucitated."
				<< std::endl;
	}
	std::cout << " Claptrap " << name
				<< " heals " << amount2
				<< " points of damage"
				<< " and restores " << amount
				<< " energy points!"
				<< std::endl;
	hitpoints += amount;
	energypoints += amount;
}