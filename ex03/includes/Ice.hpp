#ifndef ICE_H
#define ICE_H

#include "Materia.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice(Ice const & rhs);
        Ice& operator=(Ice const & rhs);
        virtual ~Ice( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif