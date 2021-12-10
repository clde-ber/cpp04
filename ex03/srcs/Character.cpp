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
    *this = rhs;
}

const Character& Character::operator=(Character const & rhs)
{
    _name = rhs._name;
    _Mat[0] = rhs._Mat[0];
    _Mat[1] = rhs._Mat[1];
    _Mat[2] = rhs._Mat[2];
    _Mat[3] = rhs._Mat[3];
    return *this;
}

Character::~Character(void)
{

}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 and _Mat[idx])
        _Mat[idx]->use(target);
    else
        std::cout << "No materia cannot be used!" << std::endl;
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
    if (idx < 4 and idx >= 0)
        _Mat[idx] = 0;
}