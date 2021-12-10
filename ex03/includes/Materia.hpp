#ifndef MATERIA_H
#define MATERIA_H

#include <iostream>
#include <string>
class ICharacter;

class AMateria
{
    protected:
        std::string const _type;
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

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice(Ice const & rhs);
        Ice& operator=(Ice const & rhs);
        ~Ice( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure(Cure const & rhs);
        Cure& operator=(Cure const & rhs);
        ~Cure( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif