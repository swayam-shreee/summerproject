#include "Character.hpp"

class Enemy {
public:
    Enemy();
    Enemy(int health, int attack){
        this->health = health;
        this->attack = attack;
    }

    void setHealth(int health){
        this->health = health;
    
    }
    void setAttack(int attack){
        this->attack = attack;
    }
    int getHealth(){
        return health;
    }
    int getAttack(){
        return attack;
    }
    void takeDamage(int damage){
        health -= damage;
    }
    void attackPlayer(Character &player){
        player.takeDamage(attack);
    }
    void printStats(){
        std::cout << "Health: " << health << "\n";
        std::cout << "Attack: " << attack << "\n";
    }
    
private:
    int health;
    int attack;
};