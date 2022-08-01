#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public A_Animal
{
	public: 
		Cat();
		Cat( const Cat& valueToCopy );
        Cat& operator = ( const Cat &valueToCopy );
		~Cat();

		void    makeSound() const;
		void	thinks() const;

	private: 
		Brain* 	brain;

};

#endif