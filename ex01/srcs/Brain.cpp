#include "Brain.hpp"

Brain::Brain( void )
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "idealess";
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
    std::cout << "Brain copy constructor with 100 \"" << *rhs._ideas << "\" ideas" << std::endl;
    *this = rhs;
}

Brain & Brain::operator=( Brain const &rhs)
{
    std::cout << "assignation operator called - Brain" << std::endl;
    std::string str;

    for (int i = 0; i < 100; i++)
    {
        str += rhs._ideas[i];
        _ideas[i] = str;
        str = "";
    }
    return *this;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}