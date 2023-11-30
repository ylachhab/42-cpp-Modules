#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;

	WrongAnimal *a = new WrongAnimal();
	WrongAnimal *b = new WrongCat();
	std::cout << a->getType() << std::endl;
	std::cout << b->getType() << std::endl;
	a->makeSound();
	b->makeSound();
	delete a;
	delete b;
	return 0;
}