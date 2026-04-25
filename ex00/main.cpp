#include "easyfind.hpp"
#include <vector>
#include <algorithm>

int main(void)
{

	std::vector<int> container;
	
	std::cout << "container size:		" << container.size() << std::endl;
		std::cout << "Filling container!" << std::endl;
	for (int i = 10; i < 100; i += 10)
		container.push_back(i);
	
	std::cout << "container size:		" << container.size() << std::endl;
	std::cout << "vector address:		" << &container << std::endl;
	std::cout << "first object address:	" << &(*container.begin()) << std::endl;
	std::cout << "container[0]:		" << *container.begin() << std::endl;
	std::cout << "container[1]:		" << *(container.begin() + 1) << std::endl;

	printVec(container);


	std::vector<int> arr_1;
	arr_1.push_back(10);
	if (arr_1.size() > 0)
	{
		std::vector<int>::iterator start = arr_1.begin();
		std::cout << *start << std::endl;
	}

	// printVec(container);
	// printVec(arr_1);

	// easyfind(container, 2);

	std::cout << "\n*** EASYFIND ***" << std::endl;
	try
	{
		std::cout << *easyfind(container, 60) << std::endl;
		std::cout << *easyfind(container, 66) << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n*** EASIERFIND ***" << std::endl;
	try
	{
		std::cout << *easierfind(container, 60) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}