#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default constructor of WrongAnimal called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& W) {
	std::cout << "Copy constructor of WrongAnimal called" << std::endl;
	*this = W;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& W) {
	std::cout << "Copy assegnment operator of WrongAnimal called" << std::endl;
	if (this != &W)
		this->type = W.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (type);
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal make sound" << std::endl;
}