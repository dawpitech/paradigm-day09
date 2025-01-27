/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Priest.cpp
*/

#include "Priest.hpp"

Priest::Priest(const std::string& name, int power):
    Peasant(name, power),
    Enchanter(name, power)
{
    this->printName("enters in the order.");
}

Priest::~Priest()
{
    this->printName("finds peace.");
}

void Priest::rest()
{
    if (this->getHp() == 0)
    {
        this->printName("is out of combat.");
        return;
    }
    this->setPower(this->getPower() + 100);
    this->setHp(this->getHp() + 100);
    this->printName("prays.");
}
