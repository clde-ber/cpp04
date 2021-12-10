#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Aanimal
{
    private:
        Brain* _brain;
    public:
        Cat( void );
        Cat( std::string type );
        Cat( Cat const & rhs);
        const Cat & operator=( Cat const &rhs);
        ~Cat( void );
        void makeSound( void ) const;
};

#endif