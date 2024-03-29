#include "MutantStack.hpp"
#include <iostream>
#include <sstream>
#include <list>

static void test_subject(void) {
	std::cout << "*** Test Subject ***" << std::endl;

	MutantStack<int> mstack;

	std::cout << "Adding 5" << std::endl;
	mstack.push(5);
	std::cout << "Adding 17" << std::endl;
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it; 	// just testing that it is possible to increment
 	--it;	// and decrement. Shouldn't do anything.
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << std::endl;
}

static void test_10_numbers(void) {
	std::cout << "*** Test 10 Numbers ***" << std::endl;

	MutantStack<int, std::vector<int> > mstack;

	for (int i = 0; i < 10; i++) {
		mstack.push(i);
	}

	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	for (MutantStack<int>::iterator it = mstack.begin(); 
									it != mstack.end(); 
									it++) {
		std::cout << *it << std::endl;
	}

	// Testing Deep Copy
	std::stack<int> s(mstack);

	std::cout << std::endl;
}

static void test_10_strings(void) {
	std::cout << "*** Test 10 Strings ***" << std::endl;

	MutantStack<std::string> mstack;

	// adding all numbers as strings (doing a stream conversion)
	// https://cplusplus.com/reference/sstream/stringstream/str/ 
	for (int i = 0; i < 10; i++) {
		std::ostringstream ss;
		ss << i;
		mstack.push(ss.str()); 
	}

	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	for (MutantStack<std::string>::iterator it = mstack.begin(); 
									it != mstack.end(); 
									it++) {
		std::cout << *it << std::endl;
	}

	// Testing Deep Copy
	std::stack<std::string> s(mstack);

	std::cout << std::endl;
}

static void test_10_lists(void) {
	std::cout << "*** Test 10 Lists ***" << std::endl
				<< "/* For comparison */" << std::endl;

	std::list<int> lstack;

	// https://www.geeksforgeeks.org/list-cpp-stl/ 
	for (int i = 0; i < 10; i++) {
		lstack.push_back(i); 
	}

	std::cout << "Top: " << lstack.back() << std::endl;
	std::cout << "Size: " << lstack.size() << std::endl;

	for (std::list<int>::iterator it = lstack.begin(); 
									it != lstack.end(); 
									it++) {
		std::cout << *it << std::endl;
	}

	// Testing Deep Copy
	std::list<int> s(lstack);

	std::cout << std::endl;
}

int main(void) {
	test_subject();
	test_10_numbers();
	test_10_strings();
	test_10_lists();
}
