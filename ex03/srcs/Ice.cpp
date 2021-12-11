#include "Materia.hpp"
#include "Ice.hpp"
#include "Character.hpp"

Ice& Ice::operator=(Ice const & rhs)
{
    _type = rhs._type;
    return *this;
}

Ice::Ice( void ) : AMateria("Ice")
{
    _type = "Ice";
}


Ice::Ice(Ice const & rhs) : AMateria("Ice")
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