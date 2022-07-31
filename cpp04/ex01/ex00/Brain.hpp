#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public: 
		Brain();
		Brain( const Brain& valueToCopy );
        Brain& operator = ( const Brain &valueToCopy );
		~Brain();

		std::string	getType() const;
		void    makeSound() const;

	protected: 
		std::string type;
};

#endif