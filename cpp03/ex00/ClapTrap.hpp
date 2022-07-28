#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap( std::string newName );
		ClapTrap( const ClapTrap& valueToCopy );
        ClapTrap& operator = ( const ClapTrap &valueToCopy );
		~ClapTrap();

		void 		attack(std::string const & target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

	private:
		std::string name;
		int			hitpoints;
		int			energypoints;
		int			attackdamage;

};

#endif