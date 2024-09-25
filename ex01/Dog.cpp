#include "Dog.hpp"

Dog::Dog() 
{
    this->_type = "Dog";
    this->brain = new Brain;
    std::cout << "Dog Constructor called." << std::endl;
}

Dog::~Dog() 
{
    delete this->brain;
    std::cout << "Dog Destructor called." << std::endl;
}

Dog::Dog(const Dog &other)
    : Animal(other)
{
    this->_type = other._type;
    this->brain = new Brain(*(other.brain));
    std::cout << "Dog Copy Constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != & other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*(other.brain));
        this->_type = other._type;
    }
    std::cout << "Dog asignment operation called " << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Haaaaaw." << std::endl;
}

void Dog::setBrainIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
    return brain->getIdea(index);
}