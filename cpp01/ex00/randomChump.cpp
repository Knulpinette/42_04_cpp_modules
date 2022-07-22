#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie randomZombie = Zombie(name); // Here we're using memory on the stack.
    randomZombie.announce();
}