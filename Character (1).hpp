#include <vector>
#include <iostream>
#include <string>

#include "Item.hpp"
class Character
{

public:
    Character(){
        this->x = 0;
        this->y = 0;
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

    void takeDamage(unsigned damage){
        health -= damage;
    }

    void attackEnemy(unsigned damage){

    }

    void 


    

private:
    unsigned x;
    unsigned y;
    std::vector<Item> inventory;
    unsigned health;
};