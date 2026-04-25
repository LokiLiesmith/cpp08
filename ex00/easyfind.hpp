#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream> 
#include <vector>
#include <algorithm>

template<typename T>
void printVec(std::vector<T>& vec)
{
	for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		// std::cout << vec[it] << std::endl;
		std::cout << *it << std::endl;
	}
	// for (auto it = vec.begin(); it!=vec.end(); it++)
	// 	std::cout << *it << "auto" << std::endl;

}


// template <typename T>
// typename std::vector<T>::iterator easyfind(std::vector<T>& container, int needle)
// {
// 	// for(int i = 0; (unsigned long)i < container->size(); i++)
// 	// {
// 	// 	std::cout << "easyfind[" << i << "]: "<< *(container->begin() + (unsigned long)i) << std::endl;
// 	// }
// 	for (auto it = container.begin(); it != container.end(); it++)
// 	{
// 		if(*it == needle)
// 			return it;
// 		// std::cout << needle << std::endl;
// 	}
// 	throw std::runtime_error("Value not found");
// }

template<typename T>
typename T::iterator easyfind(T& container, int needle)
{
	typename T::iterator it = std::find(container.begin(), container.end(), needle);

	if (it == container.end())
		throw std::runtime_error("Value not found");
	return it;
}

// template<typename T>
// typename T::iterator easyfind(T& container, int needle)
// {
// 	typename T::iterator it;
// 	it = std::find(container.begin(), container.end(), needle);

// 	if (it == container.end())
// 		throw std::runtime_error("Value not found");

// 	return it;
// }

template<typename T>
typename T::iterator easierfind(T& container, typename T::value_type needle)
{
	typename T::iterator it = std::find(container.begin(), container.end(), needle);

	if (it == container.end())
		throw std::runtime_error("Value not found");
	
	return it;
}

#endif
