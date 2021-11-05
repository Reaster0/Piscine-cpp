#include "Form.hpp"

Form::Form(): name("default"), signature(false), gradeToSign(150), gradeToExecute(150)
{

}

Form::Form(const Form &other): name(other.name), signature(other.signature), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
}

Form::Form(std::string const NameGiven, int const gradeSign, int const gradeExecute): name(NameGiven), signature(false), gradeToSign(gradeSign), gradeToExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form &Form::operator=(const Form &other)
{
	name = other.name;
	signature = other.signature;
	return *this;
}

void Form::beSigned(Bureaucrat const &other)
{	
	try
	{
		if (other.getGrade() > gradeToSign)
			throw Form::GradeTooLowException();
		signature = true;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}	
}