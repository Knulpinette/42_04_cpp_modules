#include "Span.hpp"

int main()
{
	Span sp1 = Span(5);

	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);

	std::cout << "Span vector: ";
	sp1.printSpan();
	std::cout << std::endl;

	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	Span sp2 = Span(5);

	sp2.addNumber(14);
	sp2.addNumber(120);
	sp2.addNumber(1);
	sp2.addNumber(4);
	sp2.addNumber(30);
	sp2.addNumber(52);

	std::cout << "Span vector: ";
	sp2.printSpan();
	std::cout << std::endl;

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	return 0;
}