#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal
{
	public: 
		Dog();
		Dog( const Dog& valueToCopy );
        Dog& operator = ( const Dog &valueToCopy );
		~Dog();

		void    makeSound() const;

	private: 
		Brain* 	brain;
};

#endif