#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// void f() {
// 	system("leaks Animal");
// }

int main()
{
	// atexit(f);
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	// Animal *a[10];
	
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (i < 2)
	// 		a[i] = new Cat();
	// 	else
	// 		a[i] = new Dog();
	// }
	// for (int i = 0; i < 4; i++)
	// 	a[i]->makeSound();
	// for (int i = 0; i < 4; i++)
	// 	delete a[i];
	Dog	d;
	Dog	e(d);
	

	return 0;
}