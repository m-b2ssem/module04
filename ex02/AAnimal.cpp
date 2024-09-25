#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("none")
{
    std::cout << "AAnimal Constructor called." << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called."<< std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
    : _type(other._type)
{
    std::cout << "AAnimal Copy Constructor called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << "AAnimal asignment operation called " << std::endl;
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal make a sound." << std::endl;
}

std::string AAnimal::getType() const
{
    return this->_type;
}