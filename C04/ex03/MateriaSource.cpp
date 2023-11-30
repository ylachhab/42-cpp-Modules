#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default constructor of MateriaSource called" << std::endl;
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& M) {
	std::cout << "Copy constructor of MateriaSource called" << std::endl;
	*this = M;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& M) {
	std::cout << "Copy assegnment operator of MateriaSource called" << std::endl;
	if (this != &M)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->inventory[i];
			this->inventory[i] = M.inventory[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor of MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

void MateriaSource::learnMateria(AMateria* obj) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = obj;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	}
	return (0);
}