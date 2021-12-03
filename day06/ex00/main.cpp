#include <iostream>
#include <limits>
#include <iomanip>

// int nbrlen(int nbr) {
// 	int result = 0;
// 	while (nbr /= 10)
// 		result++;
// 	return result;
// }

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
	std::cout << "lol";
	return ;
}

int main(int argc, char *argv[]) {
	std::string charResult = "Non displayable";
	int intResult = 0;
	float floatResult = 0.f;
	double doubleResult = 0.0;

	if (argc != 2 || (!isnbr(argv[1]) && argv[1][1])) {
		std::cout << "Invalid value" << std::endl;
		return 0;
	}
	if ((std::string)argv[1] == "nan")
		nanCase();
	
	// charResult = (char)atoi(argv[1]);
	// intResult = (int)atoi(argv[1]);
	// floatResult = (float)strtof(argv[1], NULL);
	doubleResult = strtof(argv[1], NULL);
	charResult = static_cast<char>(doubleResult);
	intResult = static_cast<int>(doubleResult);
	floatResult = static_cast<float>(doubleResult);

	std::cout << "char: " << charResult.c_str() << std::endl
	<< "int: " << intResult << std::endl
	<< "float: " << std::fixed << std::setprecision(strFloatLen(argv[1])) << floatResult << "f" << std::endl
	<< "double: " << std::fixed << std::setprecision(strFloatLen(argv[1])) << doubleResult << std::endl;
}