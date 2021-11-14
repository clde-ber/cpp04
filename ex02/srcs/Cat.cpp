#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
    this->_brain = new Brain("Cat idea");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( std::string type )
{
    this->_brain = new Brain();
    (void)type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Aanimal const & rhs)
{
    this->_brain = new Brain();
    (void)rhs;
    std::cout << "Cat copy constructor called" << std::endl;
}

const Cat & Cat::operator=( Cat const &rhs) const
{
    std::cout << "assignation operator called - Cat" << std::endl;
    return rhs;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound( void ) const
{
    std::cout << "MEEEEEEEW!" << std::endl;
}