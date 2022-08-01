#ifndef DOG_HPP
# define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public A_Animal
{
	public: 
		Dog();
		Dog( const Dog& valueToCopy );
        Dog& operator = ( const Dog &valueToCopy );
		~Dog();

		void    makeSound() const;
		void	thinks() const;

	private: 
		Brain* 	brain;
};

#endif