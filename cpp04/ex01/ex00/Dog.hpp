#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public: // everyone can access everything that's public
		Dog();
		Dog( const Dog& valueToCopy );
        Dog& operator = ( const Dog &valueToCopy );
		~Dog();

		void    makeSound() const;

	protected: // only a subclass can access what's protected


	private: // no one but the class can access what's private - even subclasses

};

#endif