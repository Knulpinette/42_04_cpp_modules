#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "ScavTrap.hpp"
#include <highfive/H5File.hpp>

class FragTrap: ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name);
		FragTrap( const FragTrap& valueToCopy );
		FragTrap& operator = ( const FragTrap& valueToCopy );
		~FragTrap();

		void highFivesGuys(void);
};

#endif