#include <string>

class Item {
    public:
        Item();

        Item(std::string &name, std::string &purpose, unsigned health, unsigned weight){
            this->name = name;
            this->purpose = purpose;
            this->health = health;
            this->weight = weight;
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




    private:
        std::string name;
        std::string purpose;
        unsigned health;
        unsigned weight;
};
