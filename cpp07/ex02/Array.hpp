#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T> class Array {
    private:
        T*              arr;
        unsigned int    size;

    public:
        Array() 
            : arr(new T[0]),
                size(0) 
                {}

        Array( unsigned int n )
            : arr(new T[n]),
                size(n) 
                {}

        Array( const Array& valueToCopy ) {
            size = valueToCopy.size;
            arr = new T(valueToCopy.size);
            *arr = *valueToCopy.arr;
            for (unsigned int i = 0; i < size; i++)
                arr[i] = valueToCopy.arr[i];
        }

        Array<T>& operator = ( const Array<T>& valueToCopy ) {
             delete[] arr;
            size = valueToCopy.size;
            arr = new Array(valueToCopy);
        }

        ~Array() {
            delete[] arr;
        }


        // Returns size of array
        unsigned int    getSize() {
            return size;
        }

        // Overloading accessors operators
        /*  
            The Subscript or Array Index Operator is denoted by ‘[]’. 
            This operator is generally used with arrays to retrieve and manipulate 
            the array elements.

                https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

            
            */
        T& operator[](unsigned int index) {
            if (index >= size)
                throw Array<T>::OutOfBoundsException();
            else
                return (arr[index]);
        }
        const T& operator[](unsigned int index) const {
            if (index >= size)
                throw Array<T>::OutOfBoundsException();
            else
                return (arr[index]);
        }

        // Throws exception when naviguating the array out of bounds.
        class OutOfBoundsException: public std::exception {
            const char * what () const throw () {
                return "Index is out of bounds."; 
            }
        };
};

#endif