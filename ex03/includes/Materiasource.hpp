
#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include <iostream>
class AMateria;
class Ice;
class Cure;

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
        std::string _type;
        AMateria* _Mat[4];
    public:
        MateriaSource( void );
        MateriaSource( std::string const & type );
        MateriaSource(MateriaSource const & rhs);
        const MateriaSource& operator=(MateriaSource const & rhs);
        ~MateriaSource();
        void learnMateria(AMateria* rhs);
        AMateria* createMateria(std::string const & type);
};


#endif