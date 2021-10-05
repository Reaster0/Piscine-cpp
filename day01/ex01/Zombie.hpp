#ifndef __ZOMBIE__H_
#define __ZOMBIE__H_
#include <string>
#include <iostream>

class Zombie
{
	private:

		std::string name;
	
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void announce(void);
		void change_name(std::string new_name);

};

		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
		Zombie* zombieHorde(int N, std::string name);

#endif