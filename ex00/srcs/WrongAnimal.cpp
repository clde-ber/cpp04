#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & rhs)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = rhs;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const &rhs)
{
    std::cout << "assignation operator called - WrongAnimal" << std::endl;
    _type = rhs._type;
    return *this;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string const & WrongAnimal::getType( void ) const
{
    return (_type);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Random WrongAnimal sound!" << std::endl;
}

WrongCat::WrongCat( void ) : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
    _type = type;
}

WrongCat::WrongCat( WrongCat const & rhs) : WrongAnimal(rhs)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = rhs;
}

WrongCat & WrongCat::operator=( WrongCat const &rhs)
{
    std::cout << "assignation operator called - WrongCat" << std::endl;
     _type = rhs._type;
    return *this;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called" << std::endl;
}