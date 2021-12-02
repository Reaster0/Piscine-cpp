#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Form *shrub;
	Form *Robot;
	Form *President;
	Bureaucrat jean("jean pierre", 4);

	Intern stagiaire;
	shrub = stagiaire.MakeForm("Shrubbery form", "shrub");
	try{
		jean.executeForm(*shrub); //will not work because it's not signed
	} catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	Robot = stagiaire.MakeForm("Robotomy form", "yes man");
	jean.signForm(*Robot);
	try{
		jean.executeForm(*Robot);
	} catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	President = stagiaire.MakeForm("Presidential form", "the french people");
	jean.signForm(*President);
	try{
		jean.executeForm(*President);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	Form *broken = stagiaire.MakeForm("fais le café", "a moi");
	delete shrub;
	delete Robot;
	delete President;
	(void)broken;
}