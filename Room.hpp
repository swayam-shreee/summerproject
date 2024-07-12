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
        this->roomName = "Empty";
        this->roomDescription = "None";
    }
     Room(std::string name, std::string description){
        this->roomName = name;
        this->roomDescription = description;
     }
     
     std::string getRoomName(){
        return roomName;
     }

    std::string getRoomDescription(){
        return roomDescription;
    }

    void setEnemies(Enemy en){
        this->enemies = en;
    }

    Enemy getEnemy(){
        return enemies;
    }

    void setItems(Item it){
        this->items = it;
    }

    Item getItems(){
        return items;
    }


    /*std::vector<Room>& operator [](int row){
        return rooms[row];
    }*/
     
    private:
        std::string roomName;
        std::string roomDescription;
        Item items;
        std::vector<std::string> directions;
        Enemy enemies;
        

};

#endif