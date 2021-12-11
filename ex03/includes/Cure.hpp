#ifndef CURE_H
#define CURE_H

#include "Materia.hpp"

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure(Cure const & rhs);
        Cure& operator=(Cure const & rhs);
        virtual ~Cure( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif