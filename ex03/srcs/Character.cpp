#include "Character.hpp"

Character::Character( void ) : _name("random character")
{
    for (int i = 0; i < 4; i++)
        _Mat[i] = 0;
}

Character::Character( std::string const & name ) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _Mat[i] = 0;
}

Character::Character(Character const & rhs)
{
    *this = rhs;
}

Character& Character::operator=(Character const & rhs)
{
    this->~Character();
    for (int i = 0; i < 4; i++)
        equip(rhs._Mat[i]->clone());
    return *this;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (_Mat[i])
            delete _Mat[i];
        unequip(i);
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 and idx >= 0 and _Mat[idx])
        _Mat[idx]->use(target);
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << "Cannot equip with non existent materia!" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!_Mat[i])
        {
           _Mat[i] = m;
           break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 4 and idx >= 0 and _Mat[idx])
        _Mat[idx] = 0;
}