#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
public:
    Item()
    {
        name = "None";
        purpose = "";
        health = 0;
        weight = 0;
        damage = 0;
    }

    Item(const std::string &n, const std::string &p, unsigned health, unsigned weight, unsigned damage)
    {
        name = n;
        purpose = p;
        health = health;
        weight = weight;
        damage = damage;
    }

    std::string getItemName()
    {
        return name;
    }

    std::string getPurpose()
    {
        return purpose;
    }

    unsigned getHealth()
    {
        return health;
    }

    unsigned getWeight()
    {
        return weight;
    }

    void useItem()
    {
        health = 0;
    }

private:
    std::string name;
    std::string purpose;
    unsigned health;
    unsigned weight;
    unsigned damage;
};

#endif