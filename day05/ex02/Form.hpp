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
		void beSigned(Bureaucrat const &other);
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		virtual void action() const = 0;

		Form &operator=(const Form &other);

	class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw() { return "the grade is too low for this form"; }
		};

	class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw() { return "the grade is too high and should not be over 1"; }
		};
};

	std::ostream& operator<<(std::ostream &os, const Form &other);

#endif