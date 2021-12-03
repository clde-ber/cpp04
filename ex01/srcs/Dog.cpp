#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void )
{
     _type("Dog");
    this->_brain = new Brain("Dog idea");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type )
{
     _type(type);
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Animal const & rhs)
{
     _type(rhs._type);
    this->_brain = rhs._brain;
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
    delete _brain;
}

void Dog::makeSound( void ) const
{
    std::cout << "WOOOOOOOAF!" << std::endl;
}