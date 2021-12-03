#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
    private:
        Brain* _brain;
    public:
        Dog( void );
        Dog( std::string name );
        Dog( Aanimal const & rhs);
        const Dog & operator=( Dog const &rhs);
        ~Dog( void );
        void makeSound( void ) const;
};

#endif