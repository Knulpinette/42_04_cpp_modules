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

	protected: 
		std::string ideas[100];
};

#endif