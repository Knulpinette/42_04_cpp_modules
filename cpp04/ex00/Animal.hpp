#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public: // everyone can access everything that's public
		Animal();
		Animal( std::string newName );
		Animal( const Animal& valueToCopy );
        Animal& operator = ( const Animal &valueToCopy );
		virtual ~Animal();

		std::string		getType() const;
		virtual void    makeSound() const;

	protected: // only a subclass can access what's protected
		std::string type;

	private: // no one but the class can access what's private - even subclasses

};

#endif