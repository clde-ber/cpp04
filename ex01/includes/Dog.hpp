#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog( void );
        Dog( std::string name );
        Dog( Animal const & rhs);
        const Dog & operator=( Dog const &rhs) const;
        ~Dog( void );
        void makeSound( void ) const;
};

#endif