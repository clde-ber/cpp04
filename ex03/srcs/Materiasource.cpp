#include "Materia.hpp"
#include "Materiasource.hpp"

MateriaSource::MateriaSource( void )
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
        {
            delete _Mat[i];
            _Mat[i] = 0;
        }
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

    if (!rhs)
    {
        std::cout << "Cannot add a non existent materia!" << std::endl;
        return ;
    }
    while (i < 4)
    {
        if (!_Mat[i])
        {
            _Mat[i] = rhs->clone();
            break ;
        }
        i++;
    }
    printMat();
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

void MateriaSource::printMat() const
{
    std::cout << "Materiasource : " << _type << " inventory state" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_Mat[i])
            std::cout << i << " | " << _Mat[i]->getType() << std::endl;
        else
            std::cout << i << " | empty" << std::endl;
    }
}