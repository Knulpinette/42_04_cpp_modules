#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public Animal
{
	public: // everyone can access everything that's public
		Cat();
		Cat( const Cat& valueToCopy );
        Cat& operator = ( const Cat &valueToCopy );
		~Cat();

		void    makeSound() const;

	private: 
		Brain* 	brain;

};

#endif