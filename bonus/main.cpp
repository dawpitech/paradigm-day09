/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** main.cpp
*/

#include "Peasant.hpp"

int main(void)
{
    Peasant peasant("Gildas", 42);
    peasant.damage(50);
    peasant.damage(100);
    peasant.damage(200);
    peasant.rest();
}
