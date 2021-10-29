#include "Character.hpp"


Character::Character(std::string const NameGiven)
{
	name = NameGiven;
	for (int i = 0; i < 4; i++)
		listMateria[i] = NULL;
}

Character::Character()
{
	name = "default";
	for (int i = 0; i < 4; i++)
		listMateria[i] = NULL;
}

Character::Character(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		this->listMateria[i] = other.listMateria[i];
}

Character::~Character()
{
}

Character &Character::operator=(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		this->listMateria[i] = other.listMateria[i];
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int id = 0;

	while (listMateria[id] && id < 4)
		id++;
	if (id != 4)
		listMateria[id] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && listMateria[idx])
	{
		while (idx != 4)
		{
			if (idx == 3)
				listMateria[idx] = NULL;
			else
				listMateria[idx] = listMateria[idx + 1];
			idx++;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || !listMateria[idx])
		return ;
	this->listMateria[idx]->use(target);
}