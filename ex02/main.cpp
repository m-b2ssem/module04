#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* j = new Dog();
j->makeSound();
delete j;//should not create a leak
return 0;
}
