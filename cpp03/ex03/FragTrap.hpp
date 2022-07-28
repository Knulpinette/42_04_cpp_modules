#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name);
		FragTrap( const FragTrap& valueToCopy );
		FragTrap& operator = ( const FragTrap& valueToCopy );
		~FragTrap();

		void highFivesGuys(void);

	private:
};

#endif