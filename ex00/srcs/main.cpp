#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wA = new WrongAnimal();
    const WrongCat* wC = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << wA->getType() << " " << std::endl;
    std::cout << wC->getType() << " " << std::endl;
    wA->makeSound(); //will output the animal sound!
    wC->makeSound();
    delete meta;
    delete i;
    delete j;
    delete wA;
    delete wC;
}