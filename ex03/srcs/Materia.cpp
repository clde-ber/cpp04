#include "Materia.hpp"
#include "Character.hpp"


AMateria::AMateria( void ) {}

AMateria::AMateria( std::string const & type )
{
    (void)type;
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

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* unknown materia can't be used by " << target.getName() << " *" << std::endl;
}

