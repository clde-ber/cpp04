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
    AMateria* tmpI = src->createMateria("ice");
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
    me->use(2, *bob);
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