#ifndef CHARACTER_H
#define CHARACTER_H
//std::system(afplay fichier.mp3)
#include <iostream>
#include "Materia.hpp"

class ICharacter
{
    protected:
        std::string _name;
        AMateria *_Mat[4];
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


class Character : public ICharacter
{
    public:
        Character( void );
        Character(std::string const & type );
        Character(Character const & rhs);
        const Character& operator=(Character const & rhs) const;
        ~Character() {}
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria* clone() const;
};

#endif