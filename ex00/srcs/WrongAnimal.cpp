#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & rhs) : _type(rhs._type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

const WrongAnimal & WrongAnimal::operator=( WrongAnimal const &rhs)
{
    std::cout << "assignation operator called - WrongAnimal" << std::endl;
    new (this) WrongAnimal(rhs);
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
    std::cout << "Whatever WrongAnimal sound!" << std::endl;
}

WrongCat::WrongCat( void ) : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
    _type = type;
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & rhs) : WrongAnimal(rhs)
{
     _type = rhs._type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

const WrongCat & WrongCat::operator=( WrongCat const &rhs)
{
    std::cout << "assignation operator called - WrongCat" << std::endl;
    new (this) WrongCat(rhs);
    return *this;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called" << std::endl;
}