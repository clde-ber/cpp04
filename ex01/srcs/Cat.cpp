#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal()
{
    _type = "Cat";
    _brain = new Brain("Cat idea");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal(type)
{
    _type = type;
    _brain = new Brain(type);
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const & rhs) : Animal(rhs)
{
    _type = rhs._type;
    _brain = new Brain(*rhs._brain);
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
    delete _brain;
}


void Cat::makeSound( void ) const
{
    std::cout << "MEEEEEEEW!" << std::endl;
}