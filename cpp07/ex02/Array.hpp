#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T> class Array {
    private:
        T*              arr;
        unsigned int    size;

    public:
        Array();
        Array( unsigned int n );
        Array( const Array& valueToCopy );
        Array<T>& operator = ( const Array<T>& valueToCopy );
        ~Array();

        // Returns size of array
        unsigned int    getSize();

        // Overloading accessors operators
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        // Throws exception when naviguating the array out of bounds.
        class OutOfBoundsException: public std::exception {
            const char * what () const throw ();
        };
};

#endif