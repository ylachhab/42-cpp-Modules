#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor of Brain called" << std::endl;
}

Brain::Brain(const Brain& B) {
	std::cout << "Copy constructor of Brain called" << std::endl;
	*this = B;
}

Brain& Brain::operator=(const Brain& B) {
	std::cout << "Copy assegnment operator of Brain called" << std::endl;
	if (this != &B)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = B.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor of Brain called" << std::endl;
}