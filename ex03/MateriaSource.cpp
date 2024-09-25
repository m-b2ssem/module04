#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : templates() {}

MateriaSource::MateriaSource(MateriaSource const &other) 
    : templates()
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.templates[i] != NULL)
        {
            this->templates[i] = other.templates[i]->clone();
        }
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            delete this->templates[i];
            this->templates[i] = NULL;
            if (other.templates[i] != NULL)
            {
                this->templates[i] = other.templates[i]->clone();
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        delete this->templates[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->templates[i] == NULL)
        {
            this->templates[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->templates[i] != NULL && this->templates[i]->getType() == type)
        {
            return this->templates[i]->clone();
        }
    }
    return NULL;
}
