#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Default constructor of Cat called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& C) : Animal(C) {
	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = C;
}

Cat& Cat::operator=(const Cat& C) {
	std::cout << "Copy assgnment operator of Cat called" << std::endl;
	if (this != &C)
		this->type = C.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Destructor of Cat called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Sound of cat is meows" << std::endl;
}