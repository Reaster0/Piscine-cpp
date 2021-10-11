#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "get out of there i know more than you why the things i've broke has been broken" << std::endl;
}

void Karen::info(void)
{
	std::cout << "attention everyone, just to say that full moon start tomorrow and i don't want anyone telling me bad things" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "if you don't watch your mouth you will see in the next full moon when i'll come with my witch powers" << std::endl;
}

void Karen::error(void)
{
	std::cout << "no ma'am i won't put my sitbelt, my hummer is big enough to protect me" << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*message[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string asset[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (asset[i] == level)
			(this->*message[i])();
}