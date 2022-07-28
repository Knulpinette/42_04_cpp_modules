#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(); 
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &valueToCopy );
		DiamondTrap & operator = (const DiamondTrap &valueToCopy );
		~DiamondTrap();

		friend void ScavTrap::attack(std::string const & target);
		void	whoAmI();

	private:
		std::string name;

};

#endif