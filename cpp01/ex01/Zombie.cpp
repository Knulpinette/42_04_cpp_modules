#include "Zombie.hpp"

Zombie::Zombie( std::string name )
                : name(name)
{}

Zombie::Zombie( void ){}

Zombie::~Zombie() 
{
    std::cout << name
                << " has been killed"
                << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << name
                << " BraiiiiiiinnnzzzZ..."
                << std::endl;
}

void    Zombie::setName( std::string newName )
{
    name = newName;
}
