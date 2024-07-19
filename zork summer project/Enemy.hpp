#ifndef ENEMY_HPP
#define ENEMY_HPP


#include <iostream>
#include <string>

#include "Character.hpp"


class Enemy {
public:
    Enemy() {
        enemyName = "None";
        enemyHealth = 0;
        enemyAttack = 0;
    }

    Enemy(std::string& name, int health, int attack){
        enemyName = name;
        enemyHealth = health;
        enemyAttack = attack;
    }

    void setName(std::string name){
        enemyName = name;
    }

    std::string& getName() {
        return enemyName;
    }

    void setHealth(int health){
        enemyHealth = health;
    
    }
    void setAttack(int attack){
        enemyAttack = attack;
    }
    int getEnemyHealth() const{
        return enemyHealth;
    }
    int getEnemyAttack() const{
        return enemyAttack;
    }
    void enemyTakeDamage(int damage){
        enemyHealth -= damage;
    }
    void attackPlayer(Character &player){
        player.playerTakeDamage(enemyAttack);
    }
    void printEnemyStats(){
        std::cout << "Health: " << enemyHealth << "\n";
        std::cout << "Attack: " << enemyAttack << "\n";
    }

    
private:
    std::string enemyName;
    int enemyHealth;
    int enemyAttack;
};

#endif