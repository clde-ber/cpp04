#include "Animal.hpp"

Aanimal::Aanimal( void ) : _type("typeless")
{
    std::cout << "Aanimal default constructor called" << std::endl;
}

Aanimal::Aanimal( std::string type ) : _type(type)
{
    std::cout << "Aanimal constructor called" << std::endl;
}

Aanimal::Aanimal( Aanimal const & rhs) : _type(rhs._type)
{
    std::cout << "Aanimal copy constructor called" << std::endl;
}

const Aanimal & Aanimal::operator=( Aanimal const &rhs)
{
    std::cout << "assignation operator called - Aanimal" << std::endl;
    new (this) Animal(rhs);
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

void Aanimal::makeSound( void ) const
{
    std::cout << "Whatever Animal sound!" << std::endl;
}