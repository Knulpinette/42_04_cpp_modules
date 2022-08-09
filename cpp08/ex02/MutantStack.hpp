#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <deque>
/*
    Here we only need the stack header because stack is itself a template
    using vectors and deque.
        template <class T, class Container = deque<T> > class stack;
    The stack has a .begin() and .end() function but they are only accessible
    from the deque container they hold. 
    With the MutatedStack we're creating a more direct access to (exposing) it.

    (Access Syntax)
    Type of the elements (T).
        Aliased as member type stack::value_type.
    Container (deque<T>)
        Type of the internal underlying container object where the elements are stored.
        Its value_type shall be T.
        Aliased as member type stack::container_type. 
        /!\ IMPORTANT
        To access its member object (underlying container variable), use .c
            example: mstack.c;
            https://docs.w3cub.com/cpp/container/stack 
    
    Spoiler alert: if you can use c++11, there is an easy solution for all this:
        using the 'auto' keyword.
    */

template <typename T, class Container = std::deque<T> > class MutantStack: public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() {}
        MutantStack( const MutantStack& valueToCopy ) {
            *this = valueToCopy;
        }
        MutantStack &operator = ( const MutantStack &valueToCopy ) {
            this->c = valueToCopy.c;
            return (*this);
        }
        ~MutantStack() {}

        iterator    begin() {
            return this->c.begin();
        }

        iterator    end() {
            return this->c.end();
        }
};

#endif