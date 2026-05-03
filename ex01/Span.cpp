#include "Span.hpp"
#include <algorithm>
#include <limits>

Span::Span(unsigned int N)
: _max_size(N)
{
}

Span::Span(const Span& other)
: _max_size(other._max_size), _vec(other._vec)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_max_size = other._max_size;
		_vec = other._vec;
		// std::cout << "ass.operator called" << std::endl;
	}
	return *this;
}

Span::~Span()
{
}

const std::vector<int>& Span::getVec() const
{
	return _vec;
}

void Span::addNumber(int n)
{
		if (_vec.size() < _max_size)
			_vec.push_back(n);
		else
			throw std::out_of_range("Span is full");
}

std::ostream& operator<<(std::ostream& os, const Span& sp)
{
	os << "{";
	for (std::vector<int>::const_iterator it = sp.getVec().begin(); it != sp.getVec().end(); it++)
	{
		os << *it;
		if (std::next(it) != sp.getVec().end())
			os << ", ";
	}
	os << "}";
	return os;
}

unsigned int Span::getMaxSize() const
{
	return _max_size;
}

int Span::shortestSpan() const
{
	if (_vec.size() < 2)
		throw std::logic_error("Not enough elements");
	
	int result = std::numeric_limits<int>::max();
	std::vector<int> temp = _vec;
	std::sort(temp.begin(), temp.end());

	for (std::vector<int>::iterator it = temp.begin(); it != temp.end() - 1; it++)
	{
		int calc = *std::next(it) - *it;
		// if (std::next(it) == temp.end())
		// 	return result;
		// std::cout << "it:" << *it << " next:" << *std::next(it) << " calc:" << calc << " result:" << result << std::endl;
		if (calc == 0)
			return 0;
		if (calc < result)
			result = calc;
	} 
	return result;
}

int Span::longestSpan() const
{
	if (_vec.size() < 2)
		throw std::logic_error("Not enough elements");

	int minimum = *std::min_element(_vec.begin(), _vec.end());
	int maximum = *std::max_element(_vec.begin(), _vec.end());

	return maximum - minimum; 
}

//easy fill for a range
void fillRange(int start, int end)
{
	std::vector<int> temp;

	std::cout << "Filling up a vector<int>" << std::endl;
	for (int i = start; i < end; ++i)
		temp.push_back(i);
	// addNumbers(temp.begin(), temp.end());
}