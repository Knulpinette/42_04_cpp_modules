#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *Horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        Horde[i].setName(name); 
        /* we have to do this because name is a private variable
        and can only be accessed by a public function from the Zombie class which zombieHorde isn´t. */
    
    return (Horde);
}