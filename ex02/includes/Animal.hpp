#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Aanimal
{
    protected:
        std::string _type;
    public:
        Aanimal( void );
        virtual ~Aanimal( void );
        virtual void makeSound( void ) const = 0;
};

#endif