#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default constructor of AMateria called" << std::endl;
	this->type = "default";
}

AMateria::AMateria(const AMateria& AM) {
	std::cout << "Copy constructor of AMateria called" << std::endl;
	*this = AM;
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria& AMateria::operator=(const AMateria& AM) {
	std::cout << "Copy assegnment operator of AMateria called" << std::endl;
	if (this != &AM)
		this->type = AM.type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "Destructor of AMateria called" << std::endl;
}

std::string const & AMateria::getType() const {
	return(this->type);
}

void AMateria::use(ICharacter& target) {
		std::cout << "* AMateria " << target.getName() << " *" << std::endl;
}