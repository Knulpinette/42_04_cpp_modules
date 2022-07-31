#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(); 
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &valueToCopy );
		DiamondTrap & operator = (const DiamondTrap &valueToCopy );
		~DiamondTrap();

		virtual void attack(std::string const & target);
		void	whoAmI();

	private:
		std::string name;

};

#endif