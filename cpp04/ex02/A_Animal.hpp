#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>

class A_Animal
{
	public: // everyone can access everything that's public
		A_Animal();
		A_Animal( const A_Animal& valueToCopy );
        A_Animal& operator = ( const A_Animal &valueToCopy );
		virtual ~A_Animal();

		std::string		getType() const;
		virtual void    makeSound() const = 0; // this makes the class abstract and impossible to instantiate.

	protected: 
		std::string type;

};

/*
	##Note on Abtract Classes
	ou create an abstract class by declaring at least one pure virtual member
	function. That's a virtual function declared by using the pure specifier 
	( = 0 ) syntax. Classes derived from the abstract class must implement 
	the pure virtual function or they, too, are abstract classes.
*/

#endif