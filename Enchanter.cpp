/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Enchanter.cpp
*/

#include "Enchanter.hpp"

Enchanter::Enchanter(const std::string& name, int power): Peasant(name, power)
{
    this->printName("learns magic from his spellbook.");
}

Enchanter::~Enchanter()
{
    this->printName("closes his spellbook.");
}

int Enchanter::attack()
{
    return this->technique(0, 0, "doesn't know how to fight.");
}

int Enchanter::special()
{
    return this->technique(50, 99, "casts a fireball.");
}

void Enchanter::rest()
{
    if (this->getHp() == 0)
    {
        this->printName("is out of combat.");
        return;
    }
    this->setPower(this->getPower() + 100);
    this->printName("meditates.");
}
