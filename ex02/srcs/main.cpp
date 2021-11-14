#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Aanimal* j = new Dog();
    const Aanimal* i = new Cat();
    const Aanimal& refD = *j;
    const Aanimal& refC = *i;
    const Aanimal* hybrid[10];
//    const Aanimal* uninstanciable = new Aanimal();

    for (int x = 0; x < 5; x++)
        hybrid[x] = new Cat(refC);
    for (int x = 5; x < 10; x++)
        hybrid[x] = new Dog(refD);
    for (int x = 0; x < 10; x++)
        delete hybrid[x];
}