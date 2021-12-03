#include "Character.hpp"

Character::Character( void )
{
    _name = "nameless";
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
    _Mat[0] = rhs._Mat[0];
    _Mat[1] = rhs._Mat[1];
    _Mat[2] = rhs._Mat[2];
    _Mat[3] = rhs._Mat[3];
}

const Character& Character::operator=(Character const & rhs)
{
    _name = rhs._name;
    for (int i = 0; i < 4; i++)
        _Mat[i] = rhs._Mat[i];
    return rhs;
}

Character::~Character(void)
{

}

void Character::use(int idx, ICharacter& target)
{
    _Mat[idx]->use(target);
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_Mat[i] == 0)
        {
           _Mat[i] = m;
           break ;
        }
    }
}

void Character::unequip(int idx)
{
    _Mat[idx] = 0;
}