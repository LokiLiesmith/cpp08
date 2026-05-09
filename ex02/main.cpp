#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <stack>
#include <list>


// int main(void)
// {
// 	std::stack<int> stack;
// 	MutantStack<int> mstack;
// 	std::vector<int> vec;

// 	// using Iterator = MutantStack<int>::iterator;
// 	// Iterator it = mstack.begin();
// 	// Iterator ite = mstack.end();

// 	std::cout << stack.empty() << std::endl;
// 	std::cout << mstack.empty() << std::endl;

// 	vec.push_back(5);
// 	vec.push_back(16);
// 	vec.push_back(3);
// 	mstack.size();

// 	mstack.push(2);
// 	mstack.push(4);
// 	mstack.push(11);
// 	mstack.push(98);
// 	// mstack.begin();
// 	mstack.debug();


// 	std::cout << "ite: " << *mstack.begin() << "it: " << *(mstack.end() - 1) << std::endl;
// 	std


// 	return 0;
// }



int main()
{

	MutantStack<int> mstack;

	std::cout << "\n*** MutantStack - test ***" << std::endl;
	mstack.push(5); 
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
		
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	/// LIST TEST
	std::cout << "\n*** List - test ***" << std::endl;
	std::list<int> lst;

	lst.push_back(5); 
	lst.push_back(17);

	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737); 
	//[...]
	lst.push_back(0);
	
	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();
	
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}

	/// VECTOR TEST
	std::cout << "\n*** Vector - test ***" << std::endl;
	std::vector<int> vec;

	vec.push_back(5); 
	vec.push_back(17);

	std::cout << vec.back() << std::endl;
	vec.pop_back();
	std::cout << vec.size() << std::endl;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737); 
	//[...]
	vec.push_back(0);
	
	std::vector<int>::iterator it_vec = vec.begin();
	std::vector<int>::iterator ite_vec = vec.end();
	
	++it_vec;
	--it_vec;
	while (it_vec != ite_vec)
	{
		std::cout << *it_vec << std::endl;
		++it_vec;
	}

	/// CONSTRUCTORS
	std::cout << "\n*** MutantStack Constructors test" << std::endl;
	
	MutantStack<int> assign;
	assign = mstack;
	MutantStack<int> copy(mstack);

	assign.debug();
	copy.debug();

	return 0;
}