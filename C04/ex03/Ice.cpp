#include "Ice.hpp"

Ice::Ice() : AMateria() {
	std::cout << "Default construtor of Ice called" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice& I) : AMateria(I) {
	std::cout << "Copy constructor of Ice called" << std::endl;
	*this = I;
}

Ice& Ice::operator=(const Ice& I) {
	std::cout << "Copy assegnment operator of Ice called" << std::endl;
	if (this != &I)
		this->type = I.type;
	return (*this);
}

Ice::~Ice() {
	std::cout << "Destructor of Ice called" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}