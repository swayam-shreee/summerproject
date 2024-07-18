#ifndef ENEMY_HPP
#define ENEMY_HPP


#include <iostream>
#include <string>

#include "Character.hpp"


class Enemy {
public:
    Enemy() {
        enemyHealth = 0;
        enemyAttack = 0;
    }
    Enemy(int health, int attack){
        enemyHealth = health;
        enemyAttack = attack;
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
    int enemyHealth;
    int enemyAttack;
};

#endif