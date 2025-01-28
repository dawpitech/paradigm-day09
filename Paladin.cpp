/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Paladin.cpp
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string& name, int power):
    Peasant(name, power),
    Knight(name, power),
    Enchanter(name, power),
    Priest(name, power)
{
    this->printName("fights for the light.");
}

Paladin::~Paladin()
{
    this->printName("is blessed.");
}
