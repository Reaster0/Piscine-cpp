#include <iostream>
#include <limits>
#include <iomanip>

bool isnbr(const char *value) {
	bool point = false;
	bool minus = false;
	while (*value){
		if ((*value < '0' || *value > '9') && (*value != '.' || point) && (*value != '-' || minus) && (*value != 'f'))
			return false;
		if (*value == 'f' && *(value + 1))
			return false;
		if (*value == '.')
			point = true;
		if (*value == '-')
			minus = true;
		value++;
	}
	return true;
}

int strFloatLen(char *nbr) {
	int result = 0;
	while (*nbr != '.' && *nbr)
		nbr++;
	nbr++;
	do {
		result++;
		nbr++;
	} while (*nbr >= '0' && *nbr <= '9');
	return result;
}

void nanCase(){
	std::cout << "char: " << "impossible" << std::endl
	<< "int: " << "impossible" << std::endl
	<< "float: " << "nanf" << std::endl
	<< "double: " << "nan" << std::endl;
}

int main(int argc, char *argv[]) {
	std::string charResult = "Non displayable";
	int intResult = 0;
	float floatResult = 0.f;
	double doubleResult = 0.0;

	if (argc != 2 || (!isnbr(argv[1]) && argv[1][1])) {
		if (argv[1] && static_cast<std::string>(argv[1]) == "nan")
			nanCase();
		else
			std::cout << "Invalid value" << std::endl;
		return 0;
	}

	if (argv[1][0] >= 32 && argv[1][0] <= 126 && (argv[1][0] > '9' || argv[1][0] < '0') && argv[1][0] != '-' )
	{
		charResult = argv[1][0];
		intResult = static_cast<int>(argv[1][0]);
		floatResult = static_cast<float>(argv[1][0]);
		doubleResult = static_cast<double>(argv[1][0]);
	}
	else
	{
		doubleResult = strtof(argv[1], NULL);
		intResult = static_cast<int>(doubleResult);
		if (intResult >= 32 && intResult <= 126)
			charResult = static_cast<char>(intResult);
		else
			charResult = "Non displayable";
		floatResult = static_cast<float>(doubleResult);
	}

	std::cout << "char: " << charResult << std::endl
	<< "int: " << intResult << std::endl
	<< "float: " << std::fixed << std::setprecision(strFloatLen(argv[1])) << floatResult << "f" << std::endl
	<< "double: " << std::fixed << std::setprecision(strFloatLen(argv[1])) << doubleResult << std::endl;
}