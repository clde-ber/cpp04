#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain("Cat idea");
}

Cat::Cat( std::string type ) : Animal(type)
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    _type = type;
    _brain = new Brain(type);
}

Cat::Cat( Cat const & rhs) : Animal(rhs)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = rhs;
}

Cat & Cat::operator=( Cat const &rhs)
{
    std::cout << "assignation operator called - Cat" << std::endl;
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
    return *this;
}

Cat::~Cat( void )
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound( void ) const
{
    std::cout << "MEEEEEEEW!" << std::endl;
}