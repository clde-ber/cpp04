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
        Aanimal(std::string const & type);
        Aanimal(Aanimal const & rhs);
        Aanimal & operator=(Aanimal const & rhs);
        virtual ~Aanimal( void );
        virtual void makeSound( void ) const = 0;
        std::string const & getType( void ) const;
};

#endif