#include "Materia.hpp"
#include "Character.hpp"


AMateria::AMateria( void ) : _type("unknown_type")
{

}

AMateria::AMateria( std::string const & type ) : _type(type)
{

}

AMateria::AMateria(AMateria const & rhs) : _type(rhs._type)
{

}

const AMateria& AMateria::operator=(AMateria const & rhs) const
{
    return rhs;
}

const Ice& Ice::operator=(Ice const & rhs) const
{
    _type = rhs._type;
    return rhs;
}

const Cure& Cure::operator=(Cure const & rhs) const
{
    _type = rhs._type;
    return rhs;
}


AMateria::~AMateria( void )
{

}

std::string const & AMateria::getType() const
{
    return this->_type;
}

Ice::Ice( void )
{
    _type("ice");
}

Ice::Ice( std::string const & type )
{
    _type(type);
}

Ice::Ice(Ice const & rhs)
{
    _type(ths._type);
}

Ice::~Ice( void )
{

}

Cure::Cure( void )
{
    _type("cure");
}

Cure::Cure( std::string const & type )
{
    _type(type);
}

Cure::Cure(Cure const & rhs)
{
    _type(rhs._type);
}

Cure::~Cure( void )
{

}

AMateria* Ice::clone() const
{
    return new Ice(this->_type);
}

AMateria* Cure::clone() const
{
    return new Cure(this->_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* unknown materia can't be used! *" << std::endl;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
