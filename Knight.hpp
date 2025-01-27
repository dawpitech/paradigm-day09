/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Knight.hpp
*/

#ifndef KNIGHT_HPP
    #define KNIGHT_HPP

    #include "Peasant.hpp"

class Knight : public Peasant
{
    public:
        explicit Knight(const std::string &name, int power);
        ~Knight();

        int attack();
        int special();
        void rest();
};
#endif //KNIGHT_HPP
