#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen stupid;
	if (argc != 2)
		return 0;
	stupid.complain(argv[1]);
	return 0;
}