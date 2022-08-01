#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public: 
		WrongAnimal();
		WrongAnimal( const WrongAnimal& valueToCopy );
        WrongAnimal& operator = ( const WrongAnimal &valueToCopy );
		virtual ~WrongAnimal();

		std::string	getType() const;
		void    makeSound() const;

	protected: 
		std::string type;
};

#endif