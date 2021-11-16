#include "Materia.hpp"
#include "Character.hpp"


AMateria::AMateria( void ) : _type("")
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
    return rhs;
}

const Cure& Cure::operator=(Cure const & rhs) const
{
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
//    clone();
}

Ice::Ice( std::string const & type )
{
    (void)type;
 //   AMateria* newM = new Ice(type);
 //   newM->clone();
}

Ice::Ice(Ice const & rhs)
{
    (void)rhs;
 //   rhs.clone();
}

Ice::~Ice( void )
{

}

Cure::Cure( void )
{
//    clone();
}

Cure::Cure( std::string const & type )
{
    (void)type;
//    AMateria* newM = new Cure(type);
 //   newM->clone();
}

Cure::Cure(Cure const & rhs)
{
    (void)rhs;
 //  rhs.clone();
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
    if (this->_type.compare("ice") == 0)
        std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    if (this->_type.compare("cure") == 0)
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else
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
