#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog( void );
        Dog( std::string name );
        Dog( Dog const & rhs);
        const Dog & operator=( Dog const &rhs) const;
        ~Dog( void );
        void makeSound( void ) const;
};

#endif