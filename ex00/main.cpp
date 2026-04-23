#include "easyfind.hpp"
#include <vector>

int main(void)
{
	const std::string a = "Mark";

	asdasd(a);


	std::vector<int> container;
	std::cout << "container size: " << container.size() << std::endl;
	container.push_back(232323);
	container.push_back(9999999);
	container.push_back(9999999);
	container.push_back(9999999);
	container.push_back(9999999);
	container.push_back(9999999);
	std::cout << "container size: " << container.size() << std::endl;
	std::cout << "container begin: " << *(container.begin() + 1) << std::endl;


	printVec(container);

	easyfind(&container, 2);


	return 0;
}