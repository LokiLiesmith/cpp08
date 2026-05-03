#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int _max_size;
		std::vector<int> _vec;

	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		
		const std::vector<int>&	getVec() const;
		void addNumber(int n);
		int	shortestSpan() const;
		int longestSpan() const;
		unsigned int getMaxSize() const;

	template<typename Iterator>
	void addNumbers(Iterator start, Iterator end)
	{
	size_t count = std::distance(start, end);

	if(_vec.size() + count > _max_size)
		throw std::out_of_range("Too many elements");
	_vec.insert(_vec.end(), start, end);
	}

};

std::ostream& operator<<(std::ostream& os, const Span& sp);

template<typename T>
void fillRange(int start, int end)
{
	std::cout << "Filling up a container" << std::endl;
	for(int i = start; i < end; i++)
		
}


#endif