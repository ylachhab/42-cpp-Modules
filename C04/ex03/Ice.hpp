#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public :
		Ice();
		Ice(const Ice& I);
		Ice& operator=(const Ice& I);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif