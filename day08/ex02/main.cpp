#include "mutantclass.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top value of the stack =" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of the stack =" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(42);
	std::cout << "---------------------------------" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "--------------------------------" << std::endl;
	std::cout << "top value of the stack using top =" << mstack.top() << std::endl
	<< "and top value of the stack using iterator end -1 =" << *(mstack.end() - 1) << std::endl;
	return 0;
}