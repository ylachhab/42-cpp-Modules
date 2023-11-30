#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria* tmp1;
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	AMateria* tmp2;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	AMateria* tmp3;
	tmp3 = src->createMateria("cure");
	me->equip(tmp3);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->unequip(0);
	delete bob;
	delete me;
	delete src;
	delete tmp;
	return 0;
}
