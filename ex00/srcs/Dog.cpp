#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type )
{
    (void)type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const & rhs)
{
    (void)rhs;
    std::cout << "Dog copy constructor called" << std::endl;
}

const Dog & Dog::operator=( Dog const &rhs) const
{
    std::cout << "assignation operator called - Dog" << std::endl;
    return rhs;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "WOOOOOOOAF!" << std::endl;
}