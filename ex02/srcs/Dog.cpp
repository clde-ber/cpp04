#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : Aanimal()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain("Dog idea");
}

Dog::Dog( std::string type ) : Aanimal(type)
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    _type = type;
    _brain = new Brain(type);
}

Dog::Dog( Dog const & rhs) : Aanimal(rhs)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = rhs;
}

Dog & Dog::operator=( Dog const &rhs)
{
    std::cout << "assignation operator called - Dog" << std::endl;
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
    return *this;
}

Dog::~Dog( void )
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "WOOOOOOOAF!" << std::endl;
}