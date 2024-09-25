#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " this is the type of j" << std::endl;
std::cout << i->getType() << " this is the type of i" << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete i;
delete j;
delete meta;
return 0;
}