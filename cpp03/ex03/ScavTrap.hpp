#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string name);
		ScavTrap( const ScavTrap& valueToCopy);
		ScavTrap& operator = (const ScavTrap& valueToCopy);
		~ScavTrap();
		
		void guardGate();
		void attack(std::string const & target);

	private:

};

#endif