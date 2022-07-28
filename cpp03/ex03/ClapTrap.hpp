#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>

class ClapTrap
{
	public: // everyone can access everything that's public
		ClapTrap();
		ClapTrap( std::string newName );
		ClapTrap( const ClapTrap& valueToCopy );
        ClapTrap& operator = ( const ClapTrap &valueToCopy );
		~ClapTrap();

		void 		attack(std::string const & target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

	protected: // only a subclass can access what's protected
		std::string name;
		int			hitpoints;
		int			energypoints;
		int			attackdamage;

	private: // no one but the class can access what's private - even subclasses

};

#endif