#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal& A);
		Animal& operator=(const Animal& A);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif