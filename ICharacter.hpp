/*
** EPITECH PROJECT, 2025
** paradigm-day09
** File description:
** ICharacter.hpp
*/

#ifndef ICHARACTER_HPP
    #define ICHARACTER_HPP

    #include <string>

class ICharacter
{
    public:
        virtual ~ICharacter() = default;
        virtual const std::string& getName() const = 0;
        virtual int getPower() const = 0;
        virtual int getHp() const = 0;

        virtual int attack() = 0;
        virtual int special() = 0;
        virtual void rest() = 0;
        virtual void damage(int damage) = 0;
};

#endif //ICHARACTER_HPP
