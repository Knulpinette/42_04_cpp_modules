#include "Zombie.hpp"

int main( void )
{
    const int nbZombies = 12;
    Zombie *horde;

    horde = zombieHorde(nbZombies, "dumbdumb");
    for (int i = 0; i < nbZombies; i++)
        horde[i].announce();

    delete[] horde; // to delete an array dynamically from the heap, use delete[]

    return (0);
}