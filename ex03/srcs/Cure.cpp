#include "Materia.hpp"
#include "Cure.hpp"
#include "Character.hpp"

Cure& Cure::operator=(Cure const & rhs)
{
    (void)rhs;
    return *this;
}

Cure::Cure( void ): AMateria("cure")
{

}

Cure::Cure(Cure const & rhs) : AMateria("cure")
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

