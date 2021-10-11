#ifndef _KAREN_
#define _KAREN_
#include <string>
#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
	void complain(std::string level);
};

#endif