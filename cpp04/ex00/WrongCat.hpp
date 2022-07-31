#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public: 
		WrongCat();
		WrongCat( const WrongCat& valueToCopy );
        WrongCat& operator = ( const WrongCat &valueToCopy );
		~WrongCat();

		void    makeSound() const;
};

#endif