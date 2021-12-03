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
        AMateria(AMateria const & rhs);
        const AMateria& operator=(AMateria const & rhs);
        virtual ~AMateria( void );
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice( std::string const & type );
        Ice(Ice const & rhs);
        const AMateria& operator=(AMateria const & rhs);
        const Ice& operator=(Ice const & rhs);
        ~Ice( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure( std::string const & type );
        Cure(Cure const & rhs);
        const AMateria& operator=(AMateria const & rhs);
        const Cure& operator=(Cure const & rhs);
        ~Cure( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif