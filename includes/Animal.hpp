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
        const Animal & operator=( Animal const &rhs) const;
        virtual ~Animal( void );
        virtual void makeSound( void ) const;
        std::string getType( void ) const;
};

#endif