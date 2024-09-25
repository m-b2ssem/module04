#include "Cat.hpp"

Cat::Cat() 
{
    this->_type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat Constructor called." << std::endl;
}

Cat::~Cat() 
{
    delete this->brain;
    std::cout << "Cat Destructor called." << std::endl;
}

Cat::Cat(const Cat &other)
    : Animal(other)
{
    this->brain = new Brain(*(other.brain));
    this->_type = other._type;
    std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat asignment operation called " << std::endl;
    if (this != & other)
    {
        Animal::operator=(other);
        this->_type = other._type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miaoooooooowwwwwwwwww." << std::endl;
}