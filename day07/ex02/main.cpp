#include "Array.hpp"

template <typename T>
void printArray(Array <T>&array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << std::endl;
}

int main()
{
	Array <int>test(5);
	std::cout << "size of test =" << test.size() << std::endl;
	test[3] = 4;
	printArray(test);

	Array <char>test2(4);
	Array <char>copy = test2;
	std::cout << "size of test2 =" << test2.size() << std::endl;
	test2[0] = 'L';
	test2[1] = 'O';
	test2[3] = 'L';
	std::cout << "test2 =" << std::endl;
	printArray(test2);
	std::cout << "and copy =" << std::endl;
	printArray(copy);
	try{
		std::cout << copy[10];
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}