#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
    _type("Cat");
    this->_brain = new Brain("Cat idea");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( std::string type )
{
     _type(type);
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Animal const & rhs)
{
     _type(rhs._type);
    this->_brain = rhs._Brain;
    std::cout << "Cat copy constructor called" << std::endl;
}

const Cat & Cat::operator=( Cat const &rhs) const
{
    std::cout << "assignation operator called - Cat" << std::endl;
    _type = rhs._type;
    return rhs;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}


void Cat::makeSound( void ) const
{
    std::cout << "MEEEEEEEW!" << std::endl;
}