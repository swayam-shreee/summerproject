#ifndef ENEMY_HPP
#define ENEMY_HPP


#include <iostream>
#include <string>

#include "Character.hpp"


class Enemy {
public:
    Enemy() = default;
    Enemy(int health, int attack){
        this->enemyHealth = health;
        this->enemyAttack = attack;
    }

    void setHealth(int health){
        this->enemyHealth = health;
    
    }
    void setAttack(int attack){
        this->enemyAttack = attack;
    }
    int getHealth(){
        return enemyHealth;
    }
    int getAttack(){
        return enemyAttack;
    }
    void enemyTakeDamage(int damage){
        enemyHealth -= damage;
    }
    void attackPlayer(Character &player){
        player.playerTakeDamage(enemyAttack);
    }
    void printStats(){
        std::cout << "Health: " << enemyHealth << "\n";
        std::cout << "Attack: " << enemyAttack << "\n";
    }
    
private:
    int enemyHealth;
    int enemyAttack;
};

#endif