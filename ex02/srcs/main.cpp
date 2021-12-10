#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Aanimal* j = new Dog();
    const Aanimal* i = new Cat();
/*
**  const Aanimal* uninstanciable = new Aanimal();
*/
    j->makeSound();
    i->makeSound();
    delete i;
    delete j;
}