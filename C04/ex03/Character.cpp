#include "Character.hpp"

Character::Character() {
	std::cout << "Default constructor of Character called" << std::endl;
	this->inv[0] = NULL;
	this->inv[1] = NULL;
	this->inv[2] = NULL;
	this->inv[3] = NULL;
}

Character::Character(const Character& obj) {
	std::cout << "Copy constructor of Character called" << std::endl;
	*this = obj;
}

Character::Character(std::string name) {
	std::cout << "Constructor parameterize of Character called" <<std::endl;
	this->name = name;
}

Character& Character::operator=(const Character& obj) {
	std::cout << "Copy assegnment operator of Character called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->inv[i];
			this->inv[i] = obj.inv[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	// std::cout << "Destructor of Character called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inv[i];
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i] == NULL)
		{
			this->inv[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		this->inv[idx] = NULL;
	else
		std::cout << "Error in the index" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if ((idx >= 0 && idx <= 3) && this->inv[idx])
		this->inv[idx]->use(target);
	else
		std::cout << "Error in the index" << std::endl;
}