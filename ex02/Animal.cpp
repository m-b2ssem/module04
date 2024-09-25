#include "Animal.hpp"

Animal::Animal() : _type("Tomato")
{
    std::cout << "Animal Constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called."<< std::endl;
}

Animal::Animal(const Animal &other)
    : _type(other._type)
{
    std::cout << "Animal Copy Constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "Animal asignment operation called " << std::endl;
    return *this;
}

void Animal::makeSound() const {}

std::string Animal::getType() const
{
    return this->_type;
}