#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *newZombie = new Zombie(name); // new Class means weŕe allocating memory from the heap. It will need to be deleted.
    return (newZombie);
}