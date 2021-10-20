#include "FragTrap.hpp"

int main()
{
	FragTrap subject_copy("boy");
	FragTrap subject_0("Zero");

	subject_0 = subject_copy;

	subject_0.attack("a simple three");
	subject_0.takeDammage(1);
	subject_0.beRepaired(1);
	subject_0.highFivesGuys();
	subject_0.takeDammage(9000);
	
}