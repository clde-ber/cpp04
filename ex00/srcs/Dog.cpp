#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type)
{
    type = "Dog";
    _type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const & rhs) : Animal(rhs)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = rhs;
}

Dog & Dog::operator=( Dog const &rhs)
{
    std::cout << "assignation operator called - Dog" << std::endl;
    _type = rhs._type;
    return *this;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "WOOOOOOOAF!" << std::endl;
}