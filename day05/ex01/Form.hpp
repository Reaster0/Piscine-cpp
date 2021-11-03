#ifndef FORM_
#define FORM_
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string name;
		bool signature;
		int const gradeToSign;
		int const gradeToExecute;

	public:
		Form();
		Form(std::string const NameGiven, int const gradeSign, int const gradeExecute);
		Form(const Form &other);
		~Form();
		void GradeTooLowException();
		void GradeTooHighException();
		void beSigned(Bureaucrat const &other);

		Form &operator=(const Form &other);
};

std::ostream& operator<<(std::ostream &os, const Form &other);

#endif