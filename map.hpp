#include <vector>
#include <iostream>
#include <string>

class Room {
    private:
    std::string roomName;
    std::string roomDescription;
    std::vector<std::string> items;
    std::vector<std::string> directions;
    
    public:
     Room(std::string name, std::string description){
        this->roomName = name;
        this->roomDescription = description;
     }
     
     std::string getRoomName(){
        return roomName;
     }

    void setRoomName(std::string name){
        this->roomName = name;
    }

    std::string getRoomDescription(){
        return roomDescription;
    }
     


};

