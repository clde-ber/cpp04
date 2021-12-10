#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void )
{
    _type = "Dog";
    _brain = new Brain("Dog idea");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type )
{
    _type = type;
    _brain = new Brain(type);
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const & rhs)
{
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

const Dog & Dog::operator=( Dog const &rhs)
{
    std::cout << "assignation operator called - Dog" << std::endl;
    new (this) Dog(rhs);
    return *this;
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