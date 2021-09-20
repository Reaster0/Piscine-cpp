#include <iostream>

void putstr_uppercase(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			std::cout << char(str[i] - 32);
		else 
			std::cout << str[i];
	} 
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		argv++;
		while (*argv)
		{
			putstr_uppercase(*argv);
			argv++;
		}
		std::cout << "\n";
	}
	return (0);
}