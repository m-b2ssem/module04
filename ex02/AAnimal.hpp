#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
    std::string _type;
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &other);
    virtual AAnimal &operator=(const AAnimal &other);
    virtual void makeSound() const;
    std::string getType() const;
};


#endif