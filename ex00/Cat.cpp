#include "Cat.hpp"

Cat::Cat() 
{
    this->_type = "Cat";
    std::cout << "Cat Constructor called." << std::endl;
}

Cat::~Cat() 
{
    std::cout << "Cat Destructor called." << std::endl;
}

Cat::Cat(const Cat &other)
    : Animal()
{
    this->_type = other._type;
    std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != & other)
    {
        Animal::operator=(other);
        this->_type = other._type;
    }
    std::cout << "Cat asignment operation called " << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miaoooooooowwwwwwwwww." << std::endl;
}