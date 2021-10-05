#include "Zombie.hpp"

void Zombie::change_name(std::string new_name)
{
	this->name = new_name;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	horde[0] = name;
	horde->announce();
	return horde;
}