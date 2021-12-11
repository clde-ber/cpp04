#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const & rhs)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = rhs;
}

Animal & Animal::operator=( Animal const &rhs)
{
    std::cout << "assignation operator called - Animal" << std::endl;
    _type = rhs._type;
    return *this;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string const & Animal::getType( void ) const
{
    return _type;
}

void Animal::makeSound( void ) const
{
    std::cout << "Random Animal sound!" << std::endl;
}