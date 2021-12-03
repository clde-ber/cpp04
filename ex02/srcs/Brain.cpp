#include "Brain.hpp"

Brain::Brain( void )
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "typeless";
    std::cout << "Brain default constructor called with 100 [nameless] ideas" << std::endl;
}

Brain::Brain( std::string idea )
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = idea;
    std::cout << "Brain constructor called with 100 \"" << idea << "\" ideas" << std::endl;
}

Brain::Brain( Brain const & rhs)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

const Brain & Brain::operator=( Brain const &rhs)
{
    std::cout << "assignation operator called - Brain" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    return rhs;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}