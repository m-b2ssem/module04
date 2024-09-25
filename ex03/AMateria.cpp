#include "AMateria.hpp"

AMateria::AMateria() : _type(""){}

AMateria::AMateria(std::string const & type) : _type(type){}

AMateria::AMateria(AMateria const &other) {*this = other;}

AMateria &AMateria::operator=(const AMateria &otehr)
{
    if (this != &otehr)
    {
        this->_type = otehr._type;
    }
    return *this;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
    return this->_type;
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}