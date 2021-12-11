#ifndef MATERIA_H
#define MATERIA_H

#include <iostream>
#include <string>
class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria( void );
        AMateria( std::string const & type );
        AMateria( AMateria const & rhs);
        AMateria & operator=(AMateria const & rhs);
        virtual ~AMateria( void );
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif