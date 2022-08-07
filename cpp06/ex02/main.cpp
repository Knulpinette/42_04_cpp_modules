#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/* Note on dynamic casting
    dynamic_cast<type> (expr) − The dynamic_cast performs a runtime cast that 
								verifies the validity of the cast. If the cast 
								cannot be made, the cast fails and the expression 
								evaluates to null. A dynamic_cast performs casts 
								on polymorphic types and can cast a A* pointer into 
								a B* pointer only if the object being pointed to 
								actually is a B object.
	https://www.educative.io/answers/what-is-dynamic-casting-in-cpp 
    */

int main()
{
	int nb_tests = 10;
	for (int i = 0; i < nb_tests; i++)
	{
		Base* test = generate();
		
		std::cout << "identify(ptr):";
		identify(test);
		std::cout << std::endl;

		std::cout << "identify(ref):";
		identify(*test);
		std::cout << std::endl << std::endl;
	}
	return (0);
}

Base*   generate(void)
{
	/* You need to initialise the seed only once:
			https://stackoverflow.com/questions/7343833/srand-why-call-it-only-once
			*/
	static bool	seedSet = false;

	if (!seedSet)
	{
		srand(time(0));
		seedSet = true;
	}

	/*
		Getting a random value between 1 and 3 (or, well, 0 and 2)
		*/
	int	randomBase = rand() % 3;

	if (randomBase == 0)
		return (new A);
	else if (randomBase == 1)
		return (new B);
	else
		return (new C);
}

void    identify(Base* p)
{
	if (p == NULL)
		return ;
	else if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C";
	else
		return ;

}

void    identify(Base& p)
{
	try {
		Base& comparison = dynamic_cast<A&>(p);
		std::cout << "A";
		(void)comparison;
	} catch (std::exception &e) {}
	try {
		Base& comparison = dynamic_cast<B&>(p);
		std::cout << "B";
		(void)comparison;
	} catch (std::exception &e) {}
	try {
		Base& comparison = dynamic_cast<C&>(p);
		std::cout << "C";
		(void)comparison;
	} catch (std::exception &e) {}
}
