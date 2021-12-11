#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Aanimal* j = new Dog();
    const Aanimal* i = new Cat();
    const WrongAnimal* wA = new WrongAnimal();
    const WrongCat* wC = new WrongCat();
    const Aanimal* k = j;
    const Aanimal* l(i);
/*
**  const Aanimal* uninstanciable = new Aanimal();
*/
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << k->getType() << std::endl;
    std::cout << l->getType() << std::endl;
    j->makeSound();
    i->makeSound();
    k->makeSound();
    l->makeSound();
    std::cout << wA->getType() << std::endl;
    std::cout << wC->getType() << std::endl;
    wA->makeSound(); //will output the animal sound!
    wC->makeSound();
    delete wA;
    delete wC;
    delete i;
    delete j;
}