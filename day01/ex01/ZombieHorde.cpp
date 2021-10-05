#include "Zombie.hpp"

void Zombie::change_name(std::string new_name)
{
	this->name = new_name;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].change_name(name);
	return horde;
}