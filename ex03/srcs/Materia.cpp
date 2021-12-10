#include "Materia.hpp"
#include "Character.hpp"


AMateria::AMateria( void ) : _type("unknown_type")
{

}

AMateria::AMateria( std::string const & type ) : _type(type)
{

}

AMateria::AMateria( AMateria const & rhs )
{
    *this = rhs;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    (void)rhs;
    return *this;
}

AMateria::~AMateria(void)
{

}

Ice& Ice::operator=(Ice const & rhs)
{
    (void)rhs;
    return *this;
}

Cure& Cure::operator=(Cure const & rhs)
{
    (void)rhs;
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

Ice::Ice( void ) : AMateria("ice") {}


Ice::Ice(Ice const & rhs) : AMateria("ice")
{
    *this = rhs;
}

Ice::~Ice( void )
{

}

Cure::Cure( void ): AMateria("cure") {}

Cure::Cure(Cure const & rhs) : AMateria("cure")
{
    *this = rhs;
}

Cure::~Cure( void )
{

}

AMateria* Ice::clone() const
{
    return new Ice();
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* unknown materia can't be used by " << target.getName() << " *" << std::endl;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
