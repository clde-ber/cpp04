#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void )
{
    _type = "Cat";
    _brain = new Brain("Cat idea");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( std::string type )
{
    _type = type;
    _brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const & rhs)
{
    _type = rhs._type;
    _brain = rhs._brain;
    std::cout << "Cat copy constructor called" << std::endl;
}

const Cat & Cat::operator=( Cat const &rhs)
{
    std::cout << "assignation operator called - Cat" << std::endl;
    _type = rhs._type;
    _brain = rhs._brain;
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