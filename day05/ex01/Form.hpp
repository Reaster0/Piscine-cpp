#ifndef FORM_
#define FORM_
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string name;
		bool signature;


	public:
		Form();
		Form(const Form &other);
		~Form();

		Form &operator=(const Form &other);
};

#endif