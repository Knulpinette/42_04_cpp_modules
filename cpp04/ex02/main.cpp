#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//std::cout << std::endl << "[CREATING AN ABSTRACT ANIMAL]" << std::endl;
	//const A_Animal	animal;

	//animal.makeSound();

	std::cout << std::endl << "[CREATING HALF CATS AND HALF DOGS]" << std::endl;
    const int       nbOfAnimals = 15;
    const A_Animal*	animals[nbOfAnimals];

	for (int i = 0; i < nbOfAnimals / 2; i++) {
        animals[i] = new Cat(); 
	}
    for (int i = (nbOfAnimals / 2); i < nbOfAnimals; i++) {
        animals[i] = new Dog();
	}

	std::cout << std::endl << "[MAKING 1 CAT AND 1 DOG TO COPY FROM]" << std::endl;
	Dog	dog;
	Cat	cat;

	std::cout << std::endl << "[MAKING 2 DEEP COPIES]" << std::endl;
    Dog	deepDog = dog;
	Cat	deepCat = cat;

	std::cout << std::endl << "[DOG THINKS]" << std::endl;
	dog.thinks();
	std::cout << std::endl << "[CAT THINKS]" << std::endl;
	cat.thinks();

	std::cout << std::endl << "[DEEPDOG THINKS]" << std::endl;
	deepDog.thinks();
	std::cout << std::endl << "[DEEPCAT THINKS]" << std::endl;
	deepCat.thinks();

	std::cout << std::endl << "[DELETING THE ARRAY OF ANIMALS]" << std::endl;
    for (int i = 0; i < nbOfAnimals; i++) {
        delete animals[i];
	}

	std::cout << std::endl << "[DESTRUCTION COPIES]" << std::endl;
    return (0);
}
