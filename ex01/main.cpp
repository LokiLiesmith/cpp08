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
	Span rangeFill = Span(100);
	try
	{
		std::vector<int> asd;
		fillRange(asd, 1, 100);		
		std::cout << rangeFill << std::endl;
		rangeFill.addNumbers(asd.begin(), asd.end());
		std::cout << rangeFill << std::endl;
		std::cout << "rangeFill.longestSpan():" << rangeFill.longestSpan() << std::endl;
		std::cout << "rangeFill.shortestSpan():" << rangeFill.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Span justSomeNums = Span(100);
	try
	{
		std::vector<int> asd;
		asd.push_back(1);		
		asd.push_back(22);		
		asd.push_back(191818);		
		asd.push_back(1213);		
		asd.push_back(-222);		
		std::cout << justSomeNums << std::endl;
		justSomeNums.addNumbers(asd.begin(), asd.end());
		std::cout << justSomeNums << std::endl;
		std::cout << "justSomeNums.longestSpan():" << justSomeNums.longestSpan() << std::endl;
		std::cout << "justSomeNums.shortestSpan():" << justSomeNums.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span listFill(50);
	try
	{
		std::list<int> lst;
		fillRange(lst, 50, 99);

		listFill.addNumbers(lst.begin(), lst.end());
		std::cout << listFill << std::endl;
		std::cout << "listFill.longestSpan():" << listFill.longestSpan() << std::endl;
		std::cout << "listFill.shortestSpan():" << listFill.shortestSpan() << std::endl;
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
