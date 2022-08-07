#include "Array.hpp"

template <typename T> Array<T>::Array() 
    : arr(new T[0]),
        size(0)
{}
template <typename T> Array<T>::Array( unsigned int n )
    : arr(new T[n]),
        size(n)
{}

template <typename T> Array<T>::Array( const Array<T> &valueToCopy ) 
{
    size = valueToCopy.size;
    arr = new T(valueToCopy.size);
    *arr = *valueToCopy.arr;
    for (unsigned int i = 0; i < size; i++)
        arr[i] = valueToCopy.arr[i];
}

template <typename T> Array<T>& Array<T>::operator = ( const Array<T> &valueToCopy )
{
    delete[] arr;
    size = valueToCopy.size;
    arr = new Array(valueToCopy);
    return (*this);
}

template <typename T> Array<T>::~Array() 
{
    delete[] arr;
}

/*  
    The Subscript or Array Index Operator is denoted by ‘[]’. 
    This operator is generally used with arrays to retrieve and manipulate 
    the array elements.

        https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

    
    */
template <typename T> T& Array<T>::operator[](unsigned int index)
{
    if (index >= size)
        throw Array<T>::OutOfBoundsException();
    else
        return (arr[index]);
}

template <typename T> const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= size)
        throw Array<T>::OutOfBoundsException();
    else
        return (arr[index]);
}


template <typename T> unsigned int Array<T>::getSize()
{
    return size;
} 

template <typename T> const char * Array<T>::OutOfBoundsException::what () const throw ()
{
	return "Index is out of bounds."; 
}
