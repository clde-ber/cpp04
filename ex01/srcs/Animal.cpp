#include "Animal.hpp"

Animal::Animal( void ) : _type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const & rhs) : _type(rhs._type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

const Animal & Animal::operator=( Animal const &rhs) const
{
    std::cout << "assignation operator called - Animal" << std::endl;
    _type = rhs._type;
    return rhs;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string const & Animal::getType( void ) const
{
    return (this->_type);
}

void Animal::makeSound( void ) const
{
    std::cout << "Whatever Animal sound!" << std::endl;
}