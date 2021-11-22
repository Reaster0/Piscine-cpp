#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Icharacter.hpp"
#include "Imateriasource.hpp"
#include "Materiasource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice")); //won't equip anything

	me->unequip(3);
	me->equip(src->createMateria("ice")); //now that there is a place i can

	ICharacter *bob = new Character("bob");
	ICharacter *test = bob;
	test->unequip(3);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}