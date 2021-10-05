#include <string>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "the adress of the string    =" << &brain
	<< "\nthe adress of the stringPTR =" << stringPTR
	<< "\nthe adress of the stringREF =" << &stringREF << std::endl;

	std::cout << "\n\nthe content of string    = " << brain
	<< "\nthe content of stringPTR = " << *stringPTR
	<< "\nthe content of stringREF = " << stringREF << std::endl;
}