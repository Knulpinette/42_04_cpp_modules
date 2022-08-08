#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>
#include <exception>

class Span {
    private:
        const unsigned int  max_size; 
        std::vector<int> span;

        Span(); // we don't need that constructor so we put it in private

    public:
        Span( unsigned int n );
        Span( const Span &valueToCopy );
        Span &operator = ( const Span &valueToCopy );
        ~Span();

        void    addNumber ( int nb );

        // For testing purposes
        void printSpan( Span &sp );

        class OutOfBoundsException: public std::exception {
            const char * what () const throw () {
                return "Index is out of bounds."; 
            }
        };
};

#endif