#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain *bCat;
    public :
		Cat();
		Cat(const Cat& C);
		Cat& operator=(const Cat& C);
		~Cat();
		void makeSound() const;
};

#endif