#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal*       animal = new Animal();
    const Animal*       dog = new Dog();
    const Animal*       cat = new Cat();
	std::cout << std::endl;

    const WrongAnimal*	wronganimal = new WrongAnimal();	
	const WrongAnimal*  wrongcat = new WrongCat();
	std::cout << std::endl;	

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;

    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    animal->makeSound();
	std::cout << std::endl;

    std::cout << wrongcat->getType() << " " << std::endl;
    std::cout << std::endl;

	wrongcat->makeSound(); //will output the animal sound
    wronganimal->makeSound();
	std::cout << std::endl;

    delete animal;
    delete dog;
    delete cat;
	std::cout << std::endl;

	delete wronganimal;
	delete wrongcat;

    return (0);
}