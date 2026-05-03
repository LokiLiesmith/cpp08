#include "easyfind.hpp"
#include <vector>
#include <list>
#include <algorithm>

int main(void)
{

	std::vector<int> vec;
	// std::vector<int>::iterator it;
	// std::cout << "vector size:		" << vector.size() << std::endl;
	std::cout << "Filling vector!" << std::endl;
	for (int i = 10; i <= 100; i += 10)
		vec.push_back(i);
	printVec(vec);

	// std::cout << "vec size:		" << vec.size() << std::endl;
	// std::cout << "vec address:		" << &vec << std::endl;
	// std::cout << "first object address:	" << &(*vec.begin()) << std::endl;
	// std::cout << "vec[0]:		" << *vec.begin() << std::endl;
	// std::cout << "vec[1]:		" << *(vec.begin() + 1) << std::endl;
	// 1. find first element
	std::cout << "\n*** FIRST ELEMENT ***" << std::endl;
	lookup(vec, 10, "vec");


	// 2. find last element
	std::cout << "\n*** LAST ELEMENT ***" << std::endl;
	lookup(vec, 100, "vec");

	//3. duplicate values
	std::cout << "\n*** DUPLICATE VALUE: 60 ***" << std::endl;
	vec.push_back(60);
	printVec(vec);
	lookup(vec, 60, "vec");
	// it = easyfind(vec, 60);
	// std::cout << "first 60 index: " << it - vec.begin() << std::endl;

	//4. Empty container: should throw
	std::cout << "\n*** EMPTY CONTAINER ***" << std::endl;
	std::vector<int> empty;
	try
	{
		// easyfind(empty, 10);
		lookup(empty, 10, "empty");
	}
	catch(const std::exception& e)
	{
		std::cout << "empty test: " << e.what() << std::endl;
	}

	// 5. List test
	std::cout << "\n*** LIST TEST ***" << std::endl;
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	printContainer(lst);
	// std::cout << *easyfind(list, 2) << std::endl;
	lookup(lst, 2, "lst");

	// 6. CONST CONTAINER
	std::cout << "\n*** CONST CONTAINER ***" << std::endl;
		const std::vector<int> const_container(vec);
	printContainer(const_container);
	lookup(const_container, 60, "const_container");
	lookup(const_container, 66, "const_container");
	
	

	/// 7. STRING BLOCK - EASIER FIND
	std::vector<std::string> container_of_strings;
	std::cout << "\n*** EASIERFIND - STRING ***" << std::endl;
	container_of_strings.push_back("Mark");
	container_of_strings.push_back("what");
	container_of_strings.push_back("the");
	container_of_strings.push_back("hell");
	container_of_strings.push_back("is");
	container_of_strings.push_back("this?");
	
	try
	{
		std::cout << *easierfind(container_of_strings, "Mark") << std::endl;
		std::cout << *easierfind(container_of_strings, "60") << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
