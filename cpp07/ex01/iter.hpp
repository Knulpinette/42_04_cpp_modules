#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename U> void iter(T arr[], size_t length, U anyFunction)
{
    for (size_t i = 0; i < length; i++)
        anyFunction(arr[i]);
}

// Testing
char        toUpperChar(char c);
std::string toUpperString(std::string s);
template <typename T> T multiplyByFive(T t)
{
    T   toReturn = t * 5;
    std::cout << "multiplyByFive: " << toReturn << std::endl;
    return (toReturn);
}
template <typename T> void printArray(T arr[], size_t length)
{
    for (size_t i = 0; i < length; i++)
        std::cout << arr[i] << " ";
}

#endif