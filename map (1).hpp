#include <vector>
#include <iostream>
#include <string>

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
     
    private:
        std::string roomName;
        std::string roomDescription;
        std::vector<std::string> items;
        std::vector<std::string> directions;

};

