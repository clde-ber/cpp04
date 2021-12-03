#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
    this->_brain = new Brain("Dog idea");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type )
{
    this->_brain = new Brain();
    _type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Aanimal const & rhs)
{
    this->_brain = new Brain();
    _type = rhs.getType();
    std::cout << "Dog copy constructor called" << std::endl;
}

const Dog & Dog::operator=( Dog const &rhs) const
{
    std::cout << "assignation operator called - Dog" << std::endl;
    _type = rhs._type;
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