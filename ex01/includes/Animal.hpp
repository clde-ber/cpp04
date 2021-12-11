#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal( void );
        Animal( std::string type );
        Animal( Animal const & rhs);
        Animal & operator=( Animal const &rhs);
        virtual ~Animal( void );
        virtual void makeSound( void ) const;
        std::string const & getType( void ) const;
};

#endif