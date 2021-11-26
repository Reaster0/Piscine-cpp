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
	} catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	jean.executeForm(sangoku); //same thing but class inverted
}