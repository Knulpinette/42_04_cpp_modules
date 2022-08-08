#include "Span.hpp"

int main()
{
	Span sp1 = Span(5);

	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);

	std::cout << "***** Testing a span of 5 numbers *****" 
				<< std::endl << std::endl
				<< "Span vector 1: ";
	sp1.printSpan();
	std::cout << std::endl;

	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "***** Testing with 6 numbers in an array of max_size 5 *****" 
				<< std::endl
				<< "/* Should return an exception. */" 
				<< std::endl << std::endl;
	Span sp2 = Span(5);

	std::cout << "Adding 1rst number: 14" << std::endl;
	sp2.addNumber(14);
	std::cout << "Adding 2nd number: 120" << std::endl;
	sp2.addNumber(120);
	std::cout << "Adding 3rd number: 1" << std::endl;
	sp2.addNumber(1);
	std::cout << "Adding 4th number: 4" << std::endl;
	sp2.addNumber(4);
	std::cout << "Adding 5th number: 30" << std::endl;
	sp2.addNumber(30);
	std::cout << "Adding 6th number: 52 /* Should return an exception */" << std::endl;
	sp2.addNumber(52);
	std::cout << std::endl;

	std::cout << "Span vector 2: ";
	sp2.printSpan();
	std::cout << std::endl;

	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "***** Test with 12000 numbers *****" 
				<< std::endl << std::endl;
	Span sp3 = Span(12000);

	for (int i = 0; i < 12000; i++)
		sp3.addNumber(i);

	std::cout << "Span vector 3 " << std::endl;
	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	std::cout << std::endl;

	return 0;
}