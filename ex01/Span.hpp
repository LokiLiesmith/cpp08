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

};

std::ostream& operator<<(std::ostream& os, const Span& sp);


#endif