#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Default constructor of Dog called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& D) : Animal(D) {
	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = D;
}

Dog& Dog::operator=(const Dog& D) {
	std::cout << "Copy assegnment operator of Dog called" << std::endl;
	if (this != &D)
		this->type = D.type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Destructor of Dog called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Sound of Dog is bark" << std::endl;
}
