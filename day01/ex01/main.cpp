#include "Zombie.hpp"

#define Nbr_Z  4

int main()
{
	//allocate the memory for an array of zombie and call them pnj
	Zombie *boys = zombieHorde(Nbr_Z, "PNJ");

	//make them all tell their names
	for (int i = 0; i < Nbr_Z; i++)
		(boys + i)->announce();

	//obvously dont forget to free the memory
	delete [] boys;
}