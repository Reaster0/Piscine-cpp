#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form *lol = new ShrubberyCreationForm("garden");
	RobotomyRequestForm robot("hehe");
	PresidentialPardonForm sangoku("sayan");
	Bureaucrat jean("jean pierre", 4);
	Bureaucrat weak("too low", 150);

	jean.signForm(*lol); //if commented execute will fail
	try{
		lol->execute(jean);
	} catch(const std::exception& e){
		std::cout << e.what() << std::endl;}
	
	jean.signForm(robot); //again commented will fail
	try{
		robot.execute(jean);
	} catch(const std::exception& e){
		std::cout << e.what() << std::endl;}
	
	jean.signForm(sangoku); //again commented will fail
	try{
		sangoku.execute(jean);
		sangoku.execute(weak); //will fail
	} catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------\n";
	jean.executeForm(sangoku); //same thing but class inverted
	delete(lol);
}