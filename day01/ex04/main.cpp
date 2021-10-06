#include <iostream>
#include <fstream>

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
	while (getline(fileFrom, temp))
	{
	std::cout << temp << std::endl;
	}
}