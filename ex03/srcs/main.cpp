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
    ICharacter* me3 = me;
    AMateria* tmpI = src->createMateria("ice");
    {
         AMateria* tmp;
         tmp = tmpI;
    }
    AMateria* tmpC = src->createMateria(cure->getType());
    AMateria* tmpUT = src->createMateria("");
    AMateria* tmpII = src->createMateria(ice->getType());
    ICharacter* bob = new Character("bob");
    me3->equip(tmpI);
    me3->use(0, *bob);
    me3->equip(tmpC);
    me3->use(1, *bob);
    me3->equip(tmpUT);
    me3->use(2, *bob);
    me3->equip(tmpII);
    AMateria *noLeaks = tmpC;
    me3->unequip(1);
    me3->use(1, *bob);
    me3->use(4, *bob);
    me3->unequip(5);
    me3->unequip(-5);
    me3->equip(NULL);
    delete noLeaks;
    delete full;
    delete bob;
    delete me3;
    delete src;

    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;
    return 0;
}