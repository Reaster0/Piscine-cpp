#include <iostream>
#include <fstream>
#include <climits>

// take a source and replace it with a version where all s1 are remplaced by s2
void ft_replace(std::string *source, std::string *s1, std::string *s2)
{
	std::string result;

	if (!*s1->begin() || !*s2->begin() || !*source->begin())
		return;
	while (*source->begin() || source->find(*s1) != ULLONG_MAX)
	{
		result += source->substr(0,source->find(*s1));
		if (source->find(*s1) == ULLONG_MAX)
			source->erase(0, ULLONG_MAX);
		else
		{
			source->erase(0, source->find(*s1) + (*s1).size());
			result += *s2;
		}
	} 
	*source = result;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: argument\n";
		return (0);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string temp;
	std::string buffer;

	std::ifstream fileFrom(filename);
	if (!fileFrom)
	{
		std::cout << "Error: can't read the file\n";
		return (0);
	}
	std::ofstream fileTo("FILENAME.replace");
	if (!fileTo)
	{
		std::cout << "Error: can't write the file\n";
		return (0);
	}
	while (getline(fileFrom, buffer))
	{
		temp += buffer;
		temp.push_back('\n');
	}

	ft_replace(&temp, &s1, &s2);
	fileTo << temp;
	fileTo.close();
	fileFrom.close();
}