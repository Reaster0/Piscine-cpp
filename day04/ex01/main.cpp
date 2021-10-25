#include "cat.hpp"
#include "doggo.hpp"

int main()
{
	Animal *animals[10];
	for (int i = 0; i < 5 ; i++)
		animals[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog();
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "______________________" << std::endl;


	std::string ideas[100];
	Cat lol;
	Cat lol2;

	ideas[94] = "metro";
	ideas[96] = "boulot";
	ideas[99] = "dodo";
	lol.tell_ideas();
	//lol.change_ideas(ideas); //will change the ideas of lol2 too
	lol2 = lol;
	lol.change_ideas(ideas); //will not change the ideas of lol2
	lol2.tell_ideas();
}