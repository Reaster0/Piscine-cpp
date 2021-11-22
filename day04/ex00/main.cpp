#include "cat.hpp"
#include "doggo.hpp"
#include "wrong.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;

	const WrongAnimal* meti = new WrongAnimal();
	const WrongAnimal* goat = new WrongCat();

	goat->makeSound();
	meti->makeSound(); //will not output the wrong cat sound because makeSound isnt virtual
	delete meta;
	delete j;
	delete i;
	delete meti;
	delete goat;
}