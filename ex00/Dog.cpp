#include "Dog.hpp"

Dog::Dog() 
{
    this->_type = "Dog";
    std::cout << "Dog Constructor called." << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog Destructor called." << std::endl;
}

Dog::Dog(const Dog &other)
    : Animal()
{
    this->_type =other._type;
    std::cout << "Dog Copy Constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != & other)
    {
        Animal::operator=(other);
        this->_type = other._type;
    }
    std::cout << "Dog asignment operation called " << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Haaaaaw." << std::endl;
}
