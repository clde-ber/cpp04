
#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _Mat[4];
        void printMat() const;
    public:
        MateriaSource( void );
        MateriaSource(MateriaSource const & rhs);
        MateriaSource& operator=(MateriaSource const & rhs);
        virtual ~MateriaSource();
        void learnMateria(AMateria* rhs);
        AMateria* createMateria(std::string const & type);
};


#endif