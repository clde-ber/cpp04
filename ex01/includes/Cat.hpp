#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain;

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat( void );
        Cat( std::string type );
        Cat( Cat const & rhs);
        Cat & operator=( Cat const &rhs);
        virtual ~Cat( void );
        void makeSound( void ) const;
};

#endif