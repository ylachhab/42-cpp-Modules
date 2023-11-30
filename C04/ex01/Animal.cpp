#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default constructor of Animal called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& A){
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = A;
}

Animal& Animal::operator=(const Animal& A) {
	std::cout << "Copy assegnment operator of Animal called" << std::endl;
	if (this != &A)
		this->type = A.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Destractor of Animal called" << std::endl;
}

std::string Animal::getType() const{
	return (type);
}

void Animal::makeSound() const{
	std::cout << "Animal make sound" << std::endl;
}