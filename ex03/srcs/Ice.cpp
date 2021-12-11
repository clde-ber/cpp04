#include "Materia.hpp"
#include "Ice.hpp"
#include "Character.hpp"

Ice& Ice::operator=(Ice const & rhs)
{
    (void)rhs;
    return *this;
}

Ice::Ice( void ) : AMateria("ice")
{

}


Ice::Ice(Ice const & rhs) : AMateria("ice")
{
    *this = rhs;
}

Ice::~Ice( void ) {}

AMateria* Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}