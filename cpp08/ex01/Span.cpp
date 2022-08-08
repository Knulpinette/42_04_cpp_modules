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

int    Span::shortestSpan()
{
    // Creating copy of our instance and sorting it.
    Span    temp = Span(*this);
    std::sort(temp.span.begin(), temp.span.end());

    // array is sorted so max value is last value 
    // && span.end() returns an iterator to the position after the last element
    unsigned int    current = *(this->span.end() - 1);  
    unsigned int    result = current;     

    for ( std::vector<int>::const_iterator it = temp.span.begin() + 1;
                                            it < temp.span.end();
                                            it++ )
    {
        current = *it - *(it - 1);
        if (current < result)
            result = current;
    }

    return (result);
}

int    Span::longestSpan()
{
    return (*std::max_element(this->span.begin(), this->span.end()) 
           - *std::min_element(this->span.begin(), this->span.end()));
}

void    Span::printSpan()
{
    for (std::vector<int>::const_iterator it = this->span.begin(); 
                                    it < this->span.end(); 
                                    it++)
        std::cout << *it << " ";
}