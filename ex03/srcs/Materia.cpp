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
    _type = rhs._type;
    return *this;
}

AMateria::~AMateria(void)
{

}

const Ice& Ice::operator=(Ice const & rhs)
{
    _type = rhs._type;
    return *this;
}

const Cure& Cure::operator=(Cure const & rhs)
{
    _type = rhs._type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

Ice::Ice( void )
{
    _type = "ice";
}

Ice::Ice( std::string const & type )
{
    _type = type;
}

Ice::Ice(Ice const & rhs)
{
    *this = rhs;
}

Ice::~Ice( void )
{

}

Cure::Cure( void )
{
    _type = "cure";
}

Cure::Cure( std::string const & type )
{
    _type = type;
}

Cure::Cure(Cure const & rhs)
{
    *this = rhs;
}

Cure::~Cure( void )
{

}

AMateria* Ice::clone() const
{
    return new Ice(_type);
}

AMateria* Cure::clone() const
{
    return new Cure(_type);
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
