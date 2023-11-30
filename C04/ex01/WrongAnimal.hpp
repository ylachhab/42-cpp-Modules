#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& W);
		WrongAnimal& operator=(const WrongAnimal& W);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
};

#endif