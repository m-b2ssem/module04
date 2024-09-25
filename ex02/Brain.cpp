#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain Constructor called." << std::endl;
    for (int i = 0; i < 100; ++i) {
        this->ideas[i] = "Empty Idea";
    }
}

Brain::~Brain() 
{
    std::cout << "Brain Destructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain Copy Constructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != & other)
    {
        for (int i = 0; i < 100; ++i)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain asignment operation called " << std::endl;
    return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100) {
        this->ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "";
}