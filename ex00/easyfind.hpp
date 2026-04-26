#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream> 
#include <vector>
#include <algorithm>

template<typename T>
void printVec(const std::vector<T>& vec)
{
	std::cout << "{";
	for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it;
		if (std::next(it) != vec.end())
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
	// for (auto it = vec.begin(); it!=vec.end(); it++)
	// 	std::cout << *it << "auto" << std::endl;

}

template<typename T>
void printContainer(const T& cont)
{
	std::cout << "{";
	for (typename T::const_iterator it = cont.begin(); it != cont.end(); it++)
	{
		std::cout << *it;
		if (std::next(it) != cont.end())
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;

}

template<typename T>
typename T::iterator easyfind(T& container, int needle)
{
	typename T::iterator it = std::find(container.begin(), container.end(), needle);

	if (it == container.end())
		throw std::runtime_error("Value not found");
	return it;
}

//Const overload
template<typename T>
typename T::const_iterator easyfind(const T& container, const int needle)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), needle);

	if (it == container.end())
		throw std::runtime_error("Value not found");
	
	return it;
}

template<typename T>
typename T::iterator easierfind(T& container, typename T::value_type needle)
{
	typename T::iterator it = std::find(container.begin(), container.end(), needle);

	if (it == container.end())
		throw std::runtime_error("Value not found");
	
	return it;
}

//LOOKUP FOR ALL CONTAINERS
template<typename T>
void lookup(T& cont, int i, std::string name)
{
	try
	{
		std::cout << "Looking for: " << i << " in " << name << std::endl;
		typename T::const_iterator it = easyfind(cont, i);
		int index = 0;
		for (typename T::const_iterator tmp = cont.begin(); tmp != it; ++tmp)
			++index;
		std::cout << "found at: " << name << "[" << index << "]" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << name << ": " << e.what() << std::endl;
	}
}

#endif