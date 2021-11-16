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
        AMateria(AMateria const & rhs);
        const AMateria& operator=(AMateria const & rhs) const;
        virtual ~AMateria( void );
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice( std::string const & type );
        Ice(Ice const & rhs);
        const AMateria& operator=(AMateria const & rhs) const;
        const Ice& operator=(Ice const & rhs) const;
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
        const AMateria& operator=(AMateria const & rhs) const;
        const Cure& operator=(Cure const & rhs) const;
        ~Cure( void );
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif