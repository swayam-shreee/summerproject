#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <vector>
#include <iostream>
#include <string>

#include "Item.hpp"

class Character
{

public:

  
    Character()
    {
        x = 0;
        y = 0;
        charHealth = 100;
        charAttack = 10;
    }

    void MoveNorth()
    {
        if (y > 0)
        {
            y--;
            std::cout << "You move North." << "\n";
        }
        else
        {
            std::cout << "Can't move North.\n";
        }
    }
    void MoveSouth()
    {
        if (y < 3)
        {
            y++;
            std::cout << "You move South." << "\n";
        }
        else
        {
            std::cout << "Can't move South.\n";
        }
    }
    void MoveWest()
    {
        if (x > 0)
        {
            x--;
            std::cout << "You move West." << "\n";
        }
        else
        {
            std::cout << "Can't move West.\n";
        }
    }
    void MoveEast()
    {
        if (x < 3)
        {
            x++;
            std::cout << "You move East." << "\n";
        }
        else
        {
            std::cout << "Can't move East.\n";
        }
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    unsigned getDamage(){
        return charDamage;
    }
    void setDamage(unsigned d){
        this->charDamage = d;
    }
    void playerTakeDamage(unsigned damage)
    {
        charHealth -= damage;
    }
    
    void useHealthPotion(Item potion){
        this->charHealth += potion.getHealth();
        potion.useItem();
    }

private:
    unsigned x;
    unsigned y;
    std::vector<Item> inventory;
    unsigned charHealth;
    unsigned charAttack;
    unsigned charDamage;
};

#endif