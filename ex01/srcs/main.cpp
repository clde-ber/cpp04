#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal& refD = *j;
    const Animal& refC = *i;
    const Animal *hybrid[10];

    for (int x = 0; x < 5; x++)
        hybrid[x] = new Cat(refC);
    for (int x = 5; x < 10; x++)
        hybrid[x] = new Dog(refD);
    for (int x = 0; x < 10; x++)
        delete hybrid[x];
}