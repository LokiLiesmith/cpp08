// #ifndef MUTANTSTACK_HPP
// #define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
MutantStack<T>::MutantStack()
: std::stack<T>()
{
	std::cout << "MutantStack() called" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "~MutantStack() called" << std::endl;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
	if (this != &other)
	{

		std::stack<T>::operator=(other);
	}

	std::cout << "MutantStack operator= called" << std::endl;
	return *this;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
: std::stack<T>(other)
{
	std::cout << "MutantStack copy constructor called" << std::endl;;
}




template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{

	// std::cout << "what is this c thing" << *this->c.begin() << std::endl;
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}




template<typename T>
void MutantStack<T>::debug()
{
	typename MutantStack<T>::container_type::iterator it;

	// std::cout << "Size:	" <<this->c.size() << std::endl;

	std::cout << "[";
	for(it = this->c.begin(); it != this->c.end(); it++)
	{
		std::cout << *it;
		if (std::next(it) != this->c.end())
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;

	std::cout << "Size:	" << this->c.size() << std::endl;
}



// template<typename T>
// typename MutantStack<T>::iterator MutantStack<T>::end()
// {

// }

// template<typename T>
// typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
// {

// }

// template<typename T>
// typename MutantStack<T>::const_iterator MutantStack<T>::end() const
// {

// 


// #endif