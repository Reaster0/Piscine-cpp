#include "Zombie.hpp"

int main()
{
	//create a zombie on the heap and make him announce
	Zombie* zomboy;
	zomboy = newZombie("pity-boy");
	zomboy->announce();

	//call the randomchump function that should call the stack and deconstruct the zombie
	randomChump("i'm the bald guy");

	//delete the zomboy on the heap
	delete zomboy;
}