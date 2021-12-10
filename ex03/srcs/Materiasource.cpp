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

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
    *this = rhs;
}

MateriaSource::~MateriaSource( void )
{

}

const MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    _type = rhs._type;
    _Mat[0] = rhs._Mat[0];
    _Mat[1] = rhs._Mat[1];
    _Mat[2] = rhs._Mat[2];
    _Mat[3] = rhs._Mat[3];
    return *this;
}

void MateriaSource::learnMateria(AMateria* rhs)
{
    int i = 0;

    while (i < 4)
    {
        if (!(_Mat[i]))
        {
            _Mat[i] = rhs;
            break ;
        }
        i++;
    }
    printMat(_Mat);
    if (i == 4)
        std::cout << "Cannot add a materia : inventory is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type.compare("ice") == 0)
        return new Ice(type);
    if (type.compare("cure") == 0)
        return new Cure(type);
    return 0;
}

void MateriaSource::printMat(AMateria** const rhs) const
{
    std::cout << "Materiasource : " << _type << " inventory state" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (rhs[i])
            std::cout << i << " | " << rhs[i]->getType() << std::endl;
        else
            std::cout << i << " | empty" << std::endl;
    }
}