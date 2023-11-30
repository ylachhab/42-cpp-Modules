#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Default constructor of WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& W) : WrongAnimal(W) {
	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = W;
}

WrongCat& WrongCat::operator=(const WrongCat& W) {
	std::cout << "Copy assegnment operator of WrongCat called" << std::endl;
	if (this != &W)
		this->type = W.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Destructor of WrongCat called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat make sound" << std::endl;
}