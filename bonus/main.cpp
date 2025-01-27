/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** main.cpp
*/

#include "Enchanter.hpp"

int main(void)
{
    Enchanter enchanter("Merlin", 20);
    enchanter.attack();
    enchanter.special();
    enchanter.rest();
    enchanter.special();
    enchanter.damage(50);
}
