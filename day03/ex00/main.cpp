#include "ClapTrap.hpp"

int main()
{
	ClapTrap subject_0("Zero");

	subject_0.attack("a simple three");
	subject_0.takeDammage(1);
	subject_0.beRepaired(1);
	subject_0.takeDammage(9000);

	ClapTrap subject_copy(subject_0);
}