#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <stdlib.h>

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string name);
		ScavTrap( const ScavTrap& valueToCopy);
		ScavTrap& operator = (const ScavTrap& valueToCopy);
		~ScavTrap();
		
		void guardGate();

	private:

};

#endif