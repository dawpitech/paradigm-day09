/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Knight.cpp
*/

#include "Knight.hpp"

Knight::Knight(const std::string& name, int power): Peasant(name, power)
{
    this->printName("vows to protect the kingdom.");
}

Knight::~Knight()
{
    this->printName("takes off his armor.");
}

int Knight::attack()
{
    return this->technique(10, 20, "strikes with his sword.");
}

int Knight::special()
{
    return this->technique(30, 50, "impales his enemy.");
}

void Knight::rest()
{
    if (this->getHp() == 0)
    {
        this->printName("is out of combat.");
        return;
    }
    this->setPower(this->getPower() + 50);
    this->printName("eats.");
}
