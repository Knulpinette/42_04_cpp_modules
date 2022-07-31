#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public: // everyone can access everything that's public
		Cat();
		Cat( const Cat& valueToCopy );
        Cat& operator = ( const Cat &valueToCopy );
		~Cat();

		void    makeSound() const;

	protected: // only a subclass can access what's protected


	private: // no one but the class can access what's private - even subclasses

};

#endif