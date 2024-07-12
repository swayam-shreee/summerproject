#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item {
    public:
        Item(){
            this->name = "None";
            this->purpose = "";
            this->health = 0;
            this->weight = 0;
            this->damage = 0;
        }

        Item(const std::string &name, const std::string &purpose, unsigned health, unsigned weight, unsigned damage){
            this->name = name;
            this->purpose = purpose;
            this->health = health;
            this->weight = weight;
            this->damage = damage;
        }

        std::string getName(){
            return name;
        }

        std::string getPurpose(){
            return purpose;
        }

        unsigned getHealth(){
            return health;
        }

        unsigned getWeight(){
            return weight;
        }

        void useItem(){
           this->health = 0;
        }




    private:
        std::string name;
        std::string purpose;
        unsigned health;
        unsigned weight;
        unsigned damage;
        
};

#endif