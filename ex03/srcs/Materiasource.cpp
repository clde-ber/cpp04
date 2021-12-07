#include "Materia.hpp"
#include "Materiasource.hpp"

MateriaSource::MateriaSource( void ) : _type("typeless")
{
    _Mat[0] = 0;
    _Mat[1] = 0;
    _Mat[2] = 0;
    _Mat[3] = 0;
}

MateriaSource::MateriaSource( std::string const & type ) : _type(type)
{
    _Mat[0] = 0;
    _Mat[1] = 0;
    _Mat[2] = 0;
    _Mat[3] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & rhs) : _type(rhs._type)
{
    _Mat[0] = rhs._Mat[0];
    _Mat[1] = rhs._Mat[1];
    _Mat[2] = rhs._Mat[2];
    _Mat[3] = rhs._Mat[3];
}

MateriaSource::~MateriaSource( void )
{

}

const MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    new (this) MateriaSource(rhs);
    return *this;
}

void MateriaSource::learnMateria(AMateria* rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (!(_Mat[i]))
            _Mat[i] = rhs;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type.compare("ice") == 0)
        return new Ice(type);
    if (type.compare("cure") == 0)
        return new Cure(type);
    return 0;
}