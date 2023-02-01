
#include<iostream>
#include "MutantStack.hpp"

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

int main()
{
	 MutantStack<int> mstack;

	if(mstack.empty())
	 	std::cout<< "is empty !\n";
	mstack.push(10);
	mstack.push(20);
	mstack.push(300);
	std::cout<< "stack size is = " << mstack.size() << std::endl;
	if(!mstack.empty())
	 	std::cout<< "is not empty !\n";
}