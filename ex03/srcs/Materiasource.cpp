#include "Materia.hpp"
#include "Materiasource.hpp"

MateriaSource::MateriaSource( void ) : _type("typeless")
{
    for (int i = 0; i < 4; i++)
        _Mat[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & rhs)
{
    *this = rhs;
}

MateriaSource::~MateriaSource( void )
{
    for (int i = 0; i < 4; i++)
    {
        if (_Mat[i])
            delete _Mat[i];
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    this->~MateriaSource();
    for (int i = 0; i < 4; i++)
        learnMateria(rhs._Mat[i]->clone());
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
        return new Ice();
    if (type.compare("cure") == 0)
        return new Cure();
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