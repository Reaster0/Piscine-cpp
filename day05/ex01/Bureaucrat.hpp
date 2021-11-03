#ifndef BUREAUCRAT
#define BUREAUCRAT
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat(std::string const _name, int const note);

		Bureaucrat &operator=(const Bureaucrat &other);
		void GradeTooHighException();
		void GradeTooLowException();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

};

	std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif