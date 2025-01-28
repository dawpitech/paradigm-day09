/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Peasant.cpp
*/

#include <algorithm>
#include <format>
#include <iostream>

#include "Peasant.hpp"

Peasant::Peasant(const std::string& name, int power)
{
    this->_name = name;
    this->_power = 0;
    this->setPower(power);
    this->printName("goes for an adventure.");
}

Peasant::~Peasant()
{
    this->printName("is back to his crops.");
}

void Peasant::setHp(const int hp)
{
    this->_hp = std::clamp(hp, 0, 100);
}

void Peasant::setPower(const int power)
{
    this->_power = std::clamp(power, 0, 100);
}

void Peasant::printName(const std::string str) const
{
    std::cout << this->getName() << " " << str << std::endl;
}


int Peasant::technique(int pow_cost, int dmg, std::string output)
{
    if (this->getHp() == 0)
    {
        this->printName("is out of combat.");
        return 0;
    }
    if (pow_cost > this->getPower())
    {
        this->printName("is out of power.");
        return 0;
    }
    this->setPower(this->getPower() - pow_cost);
    this->printName(output);
    return dmg;
}


int Peasant::attack()
{
    return technique(10, 5, "tosses a stone.");
}

int Peasant::special()
{
    return technique(0, 0, "doesn't know any special move.");
}

void Peasant::rest()
{
    if (this->getHp() == 0)
    {
        this->printName("is out of combat.");
        return;
    }
    this->setPower(this->getPower() + 30);
    this->printName("takes a nap.");
}

void Peasant::damage(int damage)
{
    const std::string msg = std::format("takes {} damage.", damage);
    this->setHp(this->getHp() - damage);
    if (this->getHp() == 0)
        this->printName("is out of combat.");
    else
        this->printName(msg);
}
