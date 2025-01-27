/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Enchanter.hpp
*/

#ifndef ENCHANTER_HPP
    #define ENCHANTER_HPP

    #include "Peasant.hpp"

class Enchanter : public Peasant
{
public:
    explicit Enchanter(const std::string &name, int power);
    ~Enchanter();

    int attack();
    int special();
    void rest();
};
#endif //ENCHANTER_HPP
