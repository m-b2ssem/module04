#include "Character.hpp"

Character::Character(std::string const & name) : name(name), inventory() {}

Character::Character(Character const &other)
    : name(other.name), inventory()
{
    for (int i = 0; i < 4; ++i) {
        if (other.inventory[i]) {
            this->inventory[i] = other.inventory[i]->clone();
        }
    }
}

Character & Character::operator=(Character const &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->clearInventory();
        for (int i = 0; i < 4; ++i)
        {
            if (other.inventory[i])
            {
                this->inventory[i] = other.inventory[i]->clone();
            }
        }
    }
    return *this;
}

Character::~Character() {clearInventory();}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
    {
        this->inventory[idx]->use(target);
    }
}

void Character::clearInventory()
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->inventory[i] != NULL)
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }
    }
}

