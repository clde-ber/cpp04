#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "Materia.hpp"

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


class Character : public ICharacter
{
    private:
        std::string const _name;
        AMateria *_Mat[4];
    public:
        Character( void );
        Character(std::string const & name );
        Character(Character const & rhs);
        Character& operator=(Character const & rhs);
        virtual ~Character();
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif