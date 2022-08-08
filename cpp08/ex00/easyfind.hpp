#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
/* STL library: https://www.geeksforgeeks.org/algorithms-library-c-stl/ */
#include <vector> /* https://www.geeksforgeeks.org/vector-in-cpp-stl/ */
#include <algorithm> /* https://www.geeksforgeeks.org/c-magicians-stl-algorithms/ */
# include <deque>
# include <list>

template <typename T> 
typename T::const_iterator easyfind(const T &container, int searchInt) {
	
	return find(container.begin(), container.end(), searchInt);
};

/* About << and iterators:
	https://stackoverflow.com/questions/66434359/error-no-match-for-operator-operand-types-are-stdostream-aka-stdba */

// For testing purposes
template <typename T> void	printVector(const T i)
{
	std::cout << i << " "; 
}

#endif