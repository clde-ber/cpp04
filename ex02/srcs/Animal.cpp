#include "Animal.hpp"

Aanimal::Aanimal( void ) : _type("typeless")
{
    std::cout << "Aanimal default constructor called" << std::endl;
}

Aanimal::~Aanimal( void )
{
    std::cout << "Aanimal destructor called" << std::endl;
}