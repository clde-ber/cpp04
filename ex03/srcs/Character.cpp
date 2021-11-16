#include "Character.hpp"

Character::Character( void )
{
    _name = "";
    _Mat[0] = 0;
    _Mat[1] = 0;
    _Mat[2] = 0;
    _Mat[3] = 0;
}

Character::Character( std::string const & name )
{
    _name = name;
    _Mat[0] = 0;
    _Mat[1] = 0;
    _Mat[2] = 0;
    _Mat[3] = 0;
}

Character::Character(Character const & rhs)
{
    _name = rhs._name;
    _Mat[0] = 0;
    _Mat[1] = 0;
    _Mat[2] = 0;
    _Mat[3] = 0;
}

const Character& Character::operator=(Character const & rhs) const
{
    return rhs;
}

void Character::use(int idx, ICharacter& target)
{
    this->_Mat[idx]->use(target);
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_Mat[i] == 0)
        {
           this->_Mat[i] = m;
           break ;
        }
    }
}

void Character::unequip(int idx)
{
    this->_Mat[idx] = 0;
}
/*
AMateria* Character::clone() const
{
    return new AMateria(this->_type);
}*/