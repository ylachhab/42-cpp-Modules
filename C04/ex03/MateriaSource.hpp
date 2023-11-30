#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private :
		AMateria* inventory[4];
	public :
		MateriaSource();
		MateriaSource(const MateriaSource& M);
		MateriaSource& operator=(const MateriaSource& M);
		~MateriaSource();
		void learnMateria(AMateria* obj);
		AMateria* createMateria(std::string const & type);
};

#endif