#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <vector>
#include <iostream>
#include <string>

#include "Item.hpp"
#include "Enemy.hpp"

class Character
{

public:

  
    Character()
    {
        x = 0;
        y = 0;
        charHealth = 100;
        charDamage = 5;
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

    unsigned getHealth(){
        return charHealth;
    }

    void setDamage(unsigned d){
        charDamage = d;
    }
    void playerTakeDamage(unsigned damage)
    {
        charHealth -= damage;
    }

    /*void attackEnemy(Enemy &enemy)
    {
        enemy.enemyTakeDamage(charDamage);
        std::cout << "You attack the enemy." << "\n" << "enemy stats: \n";
        enemy.printStats();
    }*/
    
    void useHealthPotion(Item& potion){
        this->charHealth += potion.getHealth();
        potion.useItem();
    }

    void addInventory(const Item& item){
        inventory.push_back(item);
    }

    std::vector<Item> getInventory(){
        return inventory;
    }

    void printInventory(){
        std::cout << "You have: \n";
        for (int i = 0; i < inventory.size(); i++)
        {
            std::cout << inventory[i].getItemName() << "\n";
        }
    }

    void printCharStats(){
        std::cout << "Health: " << charHealth << "\n";
        std::cout << "Damage: " << charDamage << "\n";
    }


    bool searchInventory(std::string it){
        for(int i = 0;i < inventory.size();i++){
                if(inventory[i].getItemName() == it){
                    return true;
                }
            }
            return false;
    }

    

    void removeItem(Item& it){
            for(int i = 0;i < inventory.size();i++){
                if(inventory[i].getItemName() == it.getItemName()){
                    inventory.erase(inventory.begin() + i);
                    return;
                }
            }
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