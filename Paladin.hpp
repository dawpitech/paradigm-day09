/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Paladin.hpp
*/

#ifndef PALADIN_HPP
    #define PALADIN_HPP

    #include "Knight.hpp"
    #include "Priest.hpp"

class Paladin : virtual public Knight, virtual public Priest
{
    public:
        explicit Paladin(const std::string &name, int power);
        ~Paladin();

        int attack() override { return this->Knight::attack(); }
        int special() override { return this->Enchanter::special(); }
        void rest() override { return this->Priest::rest(); }
        void damage(int damage) { return this->Knight::damage(damage); }
};
#endif //PALADIN_HPP
