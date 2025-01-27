/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** Peasant.hpp
*/

#ifndef PEASANT_HPP
    #define PEASANT_HPP

    #include <string>

    #include "ICharacter.hpp"

class Peasant : public ICharacter
{
    public:
        explicit Peasant(const std::string &name, int power);
        ~Peasant() override;
        const std::string& getName() const override { return this->_name; }
        int getPower() const override { return this->_power; }
        int getHp() const override { return this->_hp; }

        void setPower(int power);
        void setHp(int hp);

        int attack() override;
        int special() override;
        void rest() override;
        void damage(int damage) override;

    protected:
        std::string _name;
        int _power;
        int _hp = 100;
        int technique(int pow_cost, int dmg, std::string output);
        void printName(std::string str) const;
};
#endif //PEASANT_HPP
