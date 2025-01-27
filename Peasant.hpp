/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Peasant.hpp
*/

#ifndef PEASANT_HPP
    #define PEASANT_HPP

    #include <string>

class Peasant
{
    public:
        explicit Peasant(const std::string &name, int power);
        ~Peasant();
        const std::string &getName() const { return this->_name; }
        int getPower() const { return this->_power; }
        int getHp() const { return this->_hp; }

        void setPower(int power);
        void setHp(int hp);

        int attack();
        int special();
        void rest();
        void damage(int damage);

    protected:
        std::string _name;
        int _power;
        int _hp = 100;
        int technique(int pow_cost, int dmg, std::string output);
        void printName(std::string str) const;
};
#endif //PEASANT_HPP
