#include "Materia.hpp"
#include "Materiasource.hpp"

MateriaSource::MateriaSource( void ) : _type("")
{

}

MateriaSource::MateriaSource( std::string const & type ) : _type(type)
{

}

MateriaSource::MateriaSource(MateriaSource const & rhs) : _type(rhs._type)
{

}

const MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) const
{
    return rhs;
}

void MateriaSource::learnMateria(AMateria* rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (!(this->_Mat[i]))
            this->_Mat[i] = rhs;
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