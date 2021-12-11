#include "Animal.hpp"

Aanimal::Aanimal( void ) : _type("Aanimal")
{
    std::cout << "Aanimal default constructor called" << std::endl;
}

Aanimal::Aanimal( std::string const & type ) : _type(type)
{
    std::cout << "Aanimal constructor called" << std::endl;
}

Aanimal::Aanimal( Aanimal const & rhs ) : _type(rhs._type)
{
    std::cout << "Aanimal copy constructor called" << std::endl;
}

Aanimal & Aanimal::operator=(Aanimal const & rhs)
{
    (void)rhs;
    return *this;
}

Aanimal::~Aanimal( void )
{
    std::cout << "Aanimal destructor called" << std::endl;
}

std::string const & Aanimal::getType( void ) const
{
    return (_type);
}