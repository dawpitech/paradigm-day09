/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Priest.hpp
*/

#ifndef PRIEST_HPP
    #define PRIEST_HPP

    #include "Enchanter.hpp"

class Priest : public Enchanter
{
public:
    explicit Priest(const std::string &name, int power);
    ~Priest();

    void rest();
};
#endif //PRIEST_HPP
