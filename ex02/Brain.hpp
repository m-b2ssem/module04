#ifndef Brain_HPP
#define Brain_HPP

#include "Animal.hpp"

class Brain
{
public:
    std::string ideas[100];

    Brain();
    virtual ~Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};

#endif