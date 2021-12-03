#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat( void );
        Cat( std::string name );
        Cat( Cat const & rhs);
        const Cat & operator=( Cat const &rhs);
        ~Cat( void );
        void makeSound( void ) const;
};

#endif