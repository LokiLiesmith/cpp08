#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream> 
#include <vector>

template<typename T>
void asdasd(T& a)
{
	std::cout << "Hello " << a << std::endl;
	// a = "Bye";
	std::cout << a << std::endl;
}

template<typename T>
void printVec(std::vector<T>& vec)
{
	for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		// std::cout << vec[it] << std::endl;
		std::cout << *it << std::endl;
	}
}


template <typename T>
void easyfind(T container, int needle)
{
	for(int i = 0; (unsigned long)i < container->size(); i++)
	{
		std::cout << "easyfind[" << i << "]: "<< *(container->begin() + (unsigned long)i) << std::endl;
	}

	(void)needle;
}


#endif
