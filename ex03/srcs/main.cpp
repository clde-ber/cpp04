#include "Character.hpp"
#include "Materiasource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);
    ICharacter* me = new Character("me");
    AMateria* tmpI;
    AMateria* tmpC;
    tmpI = src->createMateria("ice");
    me->equip(tmpI);
    tmpC = src->createMateria("cure");
    me->equip(tmpC);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete ice;
    delete cure;
    delete bob;
    delete tmpI;
    delete tmpC;
    delete me;
    delete src;
    return 0;
}