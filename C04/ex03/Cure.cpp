#include "Cure.hpp"

Cure::Cure() : AMateria() {
	std::cout << "Default constructor of Cure called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure& C) : AMateria(C) {
	std::cout << "Copy constructor of Cure called" << std::endl;
	*this = C;
}

Cure& Cure::operator=(const Cure& C) {
	std::cout << "Copy assegnment operator of Cure called" << std::endl;
	if (this != &C)
		this->type = C.type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Destructor of Cure called" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure());
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}