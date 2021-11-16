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
        Aanimal( std::string type );
        Aanimal( Aanimal const & rhs);
        const Aanimal & operator=( Aanimal const &rhs) const;
        virtual ~Aanimal( void );
        virtual void makeSound( void ) const = 0;
        std::string getType( void ) const;
};

#endif