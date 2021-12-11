#include "Materia.hpp"
#include "Cure.hpp"
#include "Character.hpp"

Cure& Cure::operator=(Cure const & rhs)
{
    _type = rhs._type;
    return *this;
}

Cure::Cure( void ): AMateria("Cure") 
{
    _type = "Cure";
}

Cure::Cure(Cure const & rhs) : AMateria("Cure")
{
    *this = rhs;
}

Cure::~Cure( void ) {}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

