#include "Zombie.hpp"

int main()
{
    Zombie brainy = Zombie("Brainy");
    Zombie *dumbdumb = newZombie("DumbDumb");

    brainy.announce();
    randomChump("Kevin");
    dumbdumb->announce();

    delete dumbdumb;

    return (0);
}