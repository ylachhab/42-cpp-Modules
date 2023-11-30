#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain* bDog;
	public :
		Dog();
		Dog(const Dog& D);
		Dog& operator=(const Dog& D);
		~Dog();
		void makeSound() const;
};

#endif