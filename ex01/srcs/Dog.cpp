#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : Animal()
{
    _type = "Dog";
    _brain = new Brain("Dog idea");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type)
{
    _type = type;
    _brain = new Brain(type);
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const & rhs) : Animal(rhs)
{
    *this = rhs;
    std::cout << "Dog copy constructor called" << std::endl;
}

const Dog & Dog::operator=( Dog const &rhs)
{
    std::cout << "assignation operator called - Dog" << std::endl;
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
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