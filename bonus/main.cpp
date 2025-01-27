/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** main.cpp
*/

#include "Paladin.hpp"

int main(void)
{
    Paladin paladin("Uther", 99);
    paladin.attack();
    paladin.special();
    paladin.rest();
    paladin.damage(50);
}
