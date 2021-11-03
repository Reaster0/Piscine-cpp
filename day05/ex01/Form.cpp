#include "Form.hpp"

Form::Form(): name("default"), signature(false), gradeToSign(150), gradeToExecute(150)
{

}

Form::Form(const Form &other): name(other.name), signature(other.signature), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
}

Form::Form(std::string const NameGiven, int const gradeSign, int const gradeExecute): name(NameGiven), signature(false), gradeToSign(gradeSign), gradeToExecute(gradeExecute)
{
}

Form::~Form()
{

}

Form &Form::operator=(const Form &other)
{
	name = other.name;
	signature = other.signature;
	//gradeToSign = other.gradeToSign;
	//gradeToExecute = other.gradeToExecute;
	return *this;
}

void Form::GradeTooLowException()
{
	std::cout << "the grade is too low for this form" << std::endl;
}

void Form::GradeTooHighException()
{
	std::cout << "the grade is too high for this form" << std::endl;
}

void Form::beSigned(Bureaucrat const &other)
{
	try
	{
		if (other.getGrade() < gradeToSign)
			throw 1;
		signature = true;
	}
	catch(const int& e)
	{
		if (e == 1)
			GradeTooLowException();
	}	
}