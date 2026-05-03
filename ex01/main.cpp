#include <iostream>
#include "Span.hpp"
#include <vector>
#include <list>

int main(void)
{
	// .addNumber Tests
	Span sp = Span(5);
	try
	{
		sp.addNumber(1);
		std::cout << sp << std::endl;
		sp.addNumber(11);
		std::cout << sp << std::endl;
		sp.addNumber(22);
		std::cout << sp << std::endl;
		sp.addNumber(34);
		std::cout << sp << std::endl;
		sp.addNumber(100);
		std::cout << sp << std::endl;
		sp.addNumber(999);
		
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp << std::endl;
	std::cout << "sp.longestSpan(): " << sp.longestSpan() << std::endl; 



	//empty container
	Span zero = Span(0);
	try
	{
		zero.addNumber(12);
		std::cout << zero << std::endl;
		std:: cout << "zero.longestSpan(): " << zero.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	//constructor tests
	try
	{
		Span copy = Span(sp);
		std::cout << "Copy:		" << copy << std::endl;
		Span assignment = sp;
		std::cout << "Assignment:	" << assignment << std::endl;
		Span negative = Span(-3);
		std::cout << "negative size: " << negative.getVec().size() << std::endl;
		std::cout << "negative max_size: " << negative.getMaxSize() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span shortest = Span(5);
	try
	{
		shortest.addNumber(6);
		shortest.addNumber(1);
		shortest.addNumber(99);
		shortest.addNumber(18);
		shortest.addNumber(3);
		std::cout << "Shortest:" << shortest << std::endl;
		std::cout << "shortest.shortsSpan(): " << shortest.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Span rangeFill = Span(10000);
	try
	{
		
		rangeFill.addNumbers(100, 10100);
		std::cout << rangeFill << std::endl;
		std::cout << "rangeFill.longestSpan():" << rangeFill.longestSpan() << std::endl;
		std::cout << "rangeFill.shortestSpan():" << rangeFill.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span listFill(50);
	try
	{
		std::list<int> lst;
		lst.addNumbers(50, 100);

		listFill.addNumbers(lst.begin(), lst.end());
		std::cout << rangeFill << std::endl;
		std::cout << "rangeFill.longestSpan():" << rangeFill.longestSpan() << std::endl;
		std::cout << "rangeFill.shortestSpan():" << rangeFill.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}



// // PROVIDED MAIN
// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }
