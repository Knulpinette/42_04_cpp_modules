#include "main.hpp"

int main()
{
    Data dinosaur = {
        .male = true,
        .type = "dinosaur",
        .sound = "BRR******"
    };

    Data cat = {
        .male = false,
        .type = "cat",
        .sound = "MEEEAAAOOOWW"
    };

    Data goat = {
        .male = false,
        .type = "goat",
        .sound = "BEHEHEHEHEHEH"
    };

    printData(dinosaur);
    printData(cat);
    printData(goat);

    std::cout << std::endl;
	std::cout << "/***** Testing Serialization *****/" << std::endl;
	std::cout << "Results should show in the same order of before" << std::endl;
	std::cout << std::endl;
	
	uintptr_t ptrDinosaur = serialize(&dinosaur);
	printData(*deserialize(ptrDinosaur));
	printData(*deserialize(serialize(&cat)));

	uintptr_t ptrGoat = serialize(&goat);
	Data* copyGoat = deserialize(ptrGoat);
	printData(*copyGoat);

    return (0);
}

/* ## Note
    reinterpret_cast<type> (expr) − The reinterpret_cast operator changes a pointer 
									to any other type of pointer. It also allows 
									casting from pointer to an integer type and 
									vice versa.
                                    Here, we will go from Data to ptr to Data etc.
    */

uintptr_t   serialize(const Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*       deserialize(const uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

void    printData (const Data& animal)
{
    std::cout << "A ";
    if (animal.male == true)
        std::cout << "male ";
    else
        std::cout << "female ";
    std::cout << animal.type << " approaches. "
                << animal.sound << std::endl;
}
