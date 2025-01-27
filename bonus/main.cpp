/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** main.cpp
*/

#include "Priest.hpp"

int main(void)
{
    Priest priest("Trichelieu", 20);
    priest.attack();
    priest.special();
    priest.rest();
    priest.damage(50);
}
