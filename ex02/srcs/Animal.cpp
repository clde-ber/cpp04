#include "Animal.hpp"

Aanimal::Aanimal( void )
{
    std::cout << "Aanimal default constructor called" << std::endl;
}

Aanimal::~Aanimal( void )
{
    std::cout << "Aanimal destructor called" << std::endl;
}

std::string const & Aanimal::getType( void ) const
{
    return (_type);
}