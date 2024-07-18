#include <string>

#include "Item.hpp"

class HealthPotion : public Item {
    
    
    public:


    HealthPotion(){
        this->name = "Health Potion";
        this->purpose = "Heals 20 health points";
        this->health = 20;
        this->weight = 10;
        this->damage = 0;
    }

    private:
        std::string name;
        std::string purpose;
        unsigned health;
        unsigned weight;
        unsigned damage;
};