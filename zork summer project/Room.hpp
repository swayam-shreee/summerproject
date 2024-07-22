#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>
#include <iostream>
#include <string>

#include "Enemy.hpp"
#include "Item.hpp"
class Room {
    public:

    Room(){
        roomName = "Empty";
        roomDescription = "None";   
        //enemies = nullptr;
        enemies = nullptr;
    }
     Room(std::string name, std::string description /*,std::string secret*/){
        roomName = std::move(name);
        roomDescription = std::move(description);
        enemies = nullptr;
        //this->secretDescription = secret;
     }
     
     std::string getRoomName(){
        return roomName;
     }

    std::string getRoomDescription(){
        return roomDescription;
    }

    void setEnemies(Enemy* en){
        enemies = en;
    }

    Enemy* getEnemy() {
        return enemies;
    }

    Item* getItems(){
        return items;
    }

    void setItems(Item* it){
        items = it;
    }



    /*bool hasItem(){
        if(items.getItems() == NULL ){
            return false;
        }
        else {
            return true;
    
    }
    }*/

    /*std::vector<Room>& operator [](int row){
        return rooms[row];
    }*/
     
    private:
        std::string roomName;
        std::string roomDescription;
        Item* items;
        std::vector<std::string> directions;
        Enemy* enemies;
        //std::string secretDescription;
        

};

#endif