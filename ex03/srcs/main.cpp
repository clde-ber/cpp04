#include "Character.hpp"
#include "Materiasource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();
/* 
**    Ice* iceTwo = new Ice();
**    Cure* cureTwo = new Cure();
**    Ice* iceThree = new Ice(*iceTwo);
**    Cure* cureThree = new Cure(*cureTwo);
*/
    src->learnMateria(0);
    src->learnMateria(ice);
    src->learnMateria(cure);
/*
**    src->learnMateria(iceThree);
**    src->learnMateria(cureThree);
*/
    AMateria *learnIce = ice->clone();
    src->learnMateria(learnIce);
    AMateria *learnCure = cure->clone();
    src->learnMateria(learnCure);
    AMateria *full = ice->clone();
    src->learnMateria(full);
    ICharacter* me = new Character("me");
    ice->use(*me);
    cure->use(*me);
    {
        ICharacter *me2;
        me2 = me;
    }
    AMateria* tmpI = src->createMateria("ice");
    {
        AMateria* tmp;
        tmp = tmpI;
    } 
    AMateria* tmpC = src->createMateria("cure");
    AMateria* tmpUT = src->createMateria("");
    AMateria* tmpII = src->createMateria("ice");
    ICharacter* bob = new Character("bob");
    me->equip(tmpI);
    me->use(0, *bob);
    me->equip(tmpC);
    me->use(1, *bob);
    me->equip(tmpUT);
    me->use(2, *bob);
    me->equip(tmpII);
    me->unequip(1);
    me->use(1, *bob);
    me->use(4, *bob);
    me->unequip(5);
    me->unequip(-5);
    me->equip(NULL);
    delete learnIce;
    delete learnCure;
    delete full;
    delete ice;
    delete cure;
    delete bob;
    delete tmpI;
    delete tmpC;
    delete tmpUT;
    delete tmpII;
    delete me;
    delete src;
    return 0;
}