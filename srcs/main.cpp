#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wA = new WrongCat();
    const WrongCat* wC = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << wA->getType() << " " << std::endl;
    std::cout << wC->getType() << " " << std::endl;
    i->makeSound(); //will output the animal sound!
    j->makeSound();
    delete meta;
    delete i;
    delete j;
    delete wA;
    delete wC;
}