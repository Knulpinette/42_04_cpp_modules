#include "Span.hpp"

Span::Span()
    : max_size(0) {}

Span::Span( unsigned int n ) 
    : max_size(n) {}

// check that this is deep copy
Span::Span( const Span &valueToCopy ) 
    : max_size(valueToCopy.max_size)
{
    span = valueToCopy.span;
}

// check that this is deep copy
Span& Span::operator = ( const Span &valueToCopy ) 
{
    span = valueToCopy.span;
    return (*this);
}

Span::~Span() {}

void    Span::addNumber( int nb )
{
    try {
        if (span.size() < max_size)
            span.push_back(nb);
        else
            throw Span::OutOfBoundsException();
            
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

void    Span::printSpan( Span &sp )
{
    for (std::vector<int>::iterator it = sp.span.begin(); 
                                    it < sp.span.end(); 
                                    it++)
        std::cout << *it << " ";
}