#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void )
{
    _brain = new Brain("Cat idea");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( std::string type )
{
    _brain = new Brain();
    _type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Aanimal const & rhs)
{
    _type = rhs.getType();
    _brain = new Brain("animal_brain");
    std::cout << "Cat copy constructor called" << std::endl;
}

const Cat & Cat::operator=( Cat const &rhs)
{
    std::cout << "assignation operator called - Cat" << std::endl;
    new (this) Cat(rhs);
    return *this;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound( void ) const
{
    std::cout << "MEEEEEEEW!" << std::endl;
}