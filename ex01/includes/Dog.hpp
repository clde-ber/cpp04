#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain;

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog( void );
        Dog( std::string type );
        Dog( Dog const & rhs);
        Dog & operator=( Dog const &rhs);
        virtual ~Dog( void );
        void makeSound( void ) const;
};

#endif