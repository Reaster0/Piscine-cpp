#ifndef RobotomyRequestForm_
#define RobotomyRequestForm_
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		void action() const;


		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};

#endif