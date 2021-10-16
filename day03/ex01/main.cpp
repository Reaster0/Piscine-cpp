#include "ScavTrap.hpp"

int main()
{
	ScavTrap subject_0("Zero");

	subject_0.attack("a simple three");
	subject_0.takeDammage(1);
	subject_0.beRepaired(1);
	subject_0.takeDammage(9000);
	
}