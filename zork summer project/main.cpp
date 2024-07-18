#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Room.hpp"
#include "Character.hpp"
#include "Item.hpp"
#include "Enemy.hpp"
#include "HealthPotion.hpp"

int main()
{
    std::vector<std::vector<Room*> > map(4, std::vector<Room*>(4));
    Room mysteriousForest("MysteriousForest", "Tall, twisted trees loom overhead, their branches blocking out most of the light. An eerie silence pervades the air.");
    Room abandonedCottage("AbandonedCottage", "The door creaks as you push it open. Inside, the furniture is covered in dust, and cobwebs hang from the corners. Something feels off.");
    Room overgrownGarden("OvergrownGarden", "Once a place of beauty, this garden is now wild and untamed. Vines and thorny bushes have taken over, but you sense there's something hidden here.");
    Room ruinedChapel("RuinedChapel", "The chapel stands in ruins, with broken stained glass windows and crumbling walls. Despite its state, there's a sense of lingering sanctity.");
    Room foggyPath("FoggyPath", "A narrow path winds through the forest, shrouded in thick fog. Shadows move in the mist, making it hard to discern what is real.");
    Room enchantedPond("EnchantedPond", "The water is crystal clear, and the surface glows with an ethereal light. Strange, aquatic plants bloom around the edges, and you feel a magical presence.");
    Room hiddenClearing("HiddenClearing", "This small clearing is surrounded by dense foliage. In the center, there's an ancient stone altar covered in mysterious runes.");
    Room secretLibrary("SecretLibrary", "Behind a hidden door, you find a library filled with ancient books and scrolls. Dusty tomes line the shelves, and there's a faint smell of parchment and ink.");
    Room creepyGraveyard("CreepyGraveyard", "Old, weathered tombstones jut out from the ground at odd angles. The air is heavy with the scent of decay, and you can hear the faint whispers of the past.");
    Room cryptEntrance("CryptEntrance", "A heavy stone door marks the entrance to a crypt. The air here is cold and damp, and the ground is uneven with loose stones.");
    Room undergroundPassage("UndergroundPassage", "This dark, narrow passage is carved into the earth. The walls are damp and covered in moss, and you can hear the distant drip of water.");
    Room shadowyAlcove("ShadowyAlcove", "A small, dark space hidden from view. The air is thick with the scent of incense, and you feel like you're being watched.");
    Room oldMansionGate("OldMansionGate", "The gate to the mansion is wrought iron and rusted. Beyond it, you can see the silhouette of the mansion, foreboding and silent.");
    Room dustyFoyer("DustyFoyer", "Inside the mansion, the foyer is grand but neglected. Dust covers every surface, and a grand staircase leads to the upper floors.");
    Room grandBallroom("GrandBallroom", "This once-majestic ballroom is now a shadow of its former self. Chandeliers hang precariously, and the dance floor is littered with debris.");
    Room forbiddenStudy("ForbiddenStudy", "A heavy oak door guards this study. Inside, it's filled with strange artifacts and books on the occult. The air is thick with the scent of old leather and mystery.");

    map[0][0] = &mysteriousForest;
    map[0][1] = &abandonedCottage;
    map[0][2] = &overgrownGarden;
    map[0][3] = &ruinedChapel;
    map[1][0] = &foggyPath;
    map[1][1] = &enchantedPond;
    map[1][2] = &hiddenClearing;
    map[1][3] = &secretLibrary;
    map[2][0] = &creepyGraveyard;
    map[2][1] = &cryptEntrance;
    map[2][2] = &undergroundPassage;
    map[2][3] = &shadowyAlcove;
    map[3][0] = &oldMansionGate;
    map[3][1] = &dustyFoyer;
    map[3][2] = &grandBallroom;
    map[3][3] = &forbiddenStudy;

    // initialze bob.
    Character bob;
    bob.setDamage(5);

    // initialize the items
    Item lantern("Lantern", "Useful in dark areas.", 5, 5, 0);
    Item key("Key", "Opens locked doors.", 5, 1, 0);
    Item runestone("Runstone", "Used to unlock magical barriers.", 5, 5, 0);
    Item ancientTome("Ancient Tome", "Contains knowledge about the land.", 5, 3, 0);
    Item amulet("Amulet", "Protects from certain dangers.", 30, 8, 0);
    Item healthPotion("Health Potion", "Restores health.", 50, 10, 0);
    Item magicSword("Magic Sword", "Increases attack power.", 100, 20, 10);

    abandonedCottage.setItems(lantern);
    overgrownGarden.setItems(key);
    hiddenClearing.setItems(runestone);
    secretLibrary.setItems(ancientTome);
    shadowyAlcove.setItems(amulet);
    cryptEntrance.setItems(magicSword);
    // mysteriousForest.setItems(healthPotion);

    // (std::string &name, std::string &purpose, unsigned health, unsigned weight, unsigned damage);
    /* - **Lantern**: Found in Abandoned Cottage. Useful in dark areas.
 - **Key**: Found in Overgrown Garden. Opens locked doors.
 - **Runestone**: Found in Hidden Clearing. Used to unlock magical barriers.
 - **Ancient Tome**: Found in Secret Library. Contains knowledge about the land.
 - **Amulet**: Found in Shadowy Alcove. Protects from certain dangers.
 - **Health Potion**: Found in various locations. Restores health.
 - **Magic Sword**: Found in Crypt Entrance. Increases attack power.

 ## Enemies
 - **Forest Goblin**: Weak enemy found in the Mysterious Forest and Overgrown Garden.
 - **Haunted Spirit**: Moderate enemy found in the Creepy Graveyard and Underground
 */

    // initialize the enemies

    Enemy forestGoblin1 = Enemy();
    forestGoblin1.setHealth(20);
    forestGoblin1.setAttack(10);

    Enemy forestGoblin2 = Enemy();
    forestGoblin2.setHealth(20);
    forestGoblin2.setAttack(10);

    Enemy hauntedSpirit1 = Enemy();
    hauntedSpirit1.setHealth(30);
    hauntedSpirit1.setAttack(15);

    Enemy hauntedSpirit2 = Enemy();
    hauntedSpirit2.setHealth(30);
    hauntedSpirit2.setAttack(15);

    // set the enemies in the rooms
    mysteriousForest.setEnemies(forestGoblin1);
    overgrownGarden.setEnemies(forestGoblin2);
    creepyGraveyard.setEnemies(hauntedSpirit1);
    undergroundPassage.setEnemies(hauntedSpirit2);

    // Item(const std::string &name, const std::string &purpose, unsigned health, unsigned weight, unsigned damage)

    // initialize the items
    Item healthPotion1("Health Potion", "Restores health.", 50, 10, 0);
    Item healthPotion2("Health Potion", "Restores health.", 50, 10, 0);
    Item healthPotion3("Health Potion", "Restores health.", 50, 10, 0);
    Item healthPotion4("Health Potion", "Restores health.", 50, 10, 0);

    // set items in map
    mysteriousForest.setItems(healthPotion1);
    overgrownGarden.setItems(healthPotion2);
    creepyGraveyard.setItems(healthPotion3);
    undergroundPassage.setItems(healthPotion4);

    // figure out pick up command and use health potion

    // Game loop


    //Enemy em = mysteriousForest.getEnemy();

    //std::cout << "\n";

    while (true)
    {

        std::cout << "Enter your command: ";
        std::string command;
        std::cin >> command;

        // gets current room. makes code cleaner.
        auto &currentRoom = map[bob.getY()][bob.getX()];


        if (command == "quit")
        {
            break;
            std::cout << "You have quit the game." << "\n";
        }
        else if (command == "look")
        {
            std::cout << "You are in the " << currentRoom->getRoomName() << ". " << currentRoom->getRoomDescription() << "\n";
        }
        else if (command == "north")
        {
            bob.MoveNorth();
        }
        else if (command == "south")
        {
            bob.MoveSouth();
        }
        else if (command == "west")
        {
            bob.MoveWest();
        }
        else if (command == "east")
        {
            bob.MoveEast();
        }
        else if (command == "help")
        {
            // Display the list of commands

            std::cout << "Commands: \n";
            std::cout << "look - Examine the current room. \n";
            std::cout << "north - Move North. \n";
            std::cout << "south - Move South. \n";
            std::cout << "west - Move West. \n";
            std::cout << "east - Move East. \n";
            std::cout << "quit - Quit the game. \n";
            std::cout << "attack - Attack the enemy. \n";
            std::cout << "examine - Search the room for items. \n";
            std::cout << "inventory - Check your inventory. \n";
        }
        // work on attack command. disply defeated enemy message bug.
        else if (command == "attack")
        {



            if (currentRoom->getEnemy().getEnemyHealth() <= 0)
                {
                    std::cout << "You have defeated the enemy." << "\n";
                }
                else
                {
                    std::cout << "You attack the enemy." << "\n";
                    std::cout << "Enemy's stats: " << "\n";
                    currentRoom->getEnemy().enemyTakeDamage(bob.getDamage());
                    currentRoom->getEnemy().printEnemyStats();
                    bob.playerTakeDamage(currentRoom->getEnemy().getEnemyAttack());
                    std::cout << "\nThe enemy attacks you." << "\n"
                              << "Your stats: \n";
                    bob.printCharStats();
                    std::cout << "\n";
                }
    
            /*if (bob.getX() == 0 && bob.getY() == 0)
            {

                // work in progress. change loop to require user input to attack every time.

                if (forestGoblin1.getHealth() <= 0)
                {
                    std::cout << "You have defeated the enemy." << "\n";
                }
                else
                {
                    forestGoblin1.enemyTakeDamage(bob.getDamage());
                    forestGoblin1.printEnemyStats();
                    std::cout << "You attack the enemy." << "\n";
                    std::cout << "Enemy's stats: " << "\n";
                    bob.playerTakeDamage(forestGoblin1.getAttack());
                    std::cout << "\nThe forest goblin attacks you." << "\n"
                              << "Your stats: \n";
                    bob.printCharStats();
                    std::cout << "\n";
                }
            }
            else if (bob.getX() == 0 && bob.getY() == 2)
            {
                if (forestGoblin2.getHealth() <= 0)
                {
                    std::cout << "You have defeated the enemy." << "\n";
                }
                else
                {
                    forestGoblin2.enemyTakeDamage(bob.getDamage());
                    forestGoblin2.printEnemyStats();
                    std::cout << "You attack the enemy." << "\n";
                    std::cout << "Enemy's stats: " << "\n";
                    bob.playerTakeDamage(forestGoblin2.getAttack());
                    std::cout << "\nThe forest goblin attacks you." << "\n"
                              << "Your stats: \n";
                    bob.printCharStats();
                    std::cout << "\n";
                }
            }
            else if (bob.getX() == 2 && bob.getY() == 0)
            {
                if (hauntedSpirit1.getHealth() <= 0)
                {
                    std::cout << "You have defeated the enemy." << "\n";
                }
                else
                {
                    hauntedSpirit1.enemyTakeDamage(bob.getDamage());
                    hauntedSpirit1.printEnemyStats();
                    std::cout << "You attack the enemy." << "\n";
                    std::cout << "Enemy's stats: " << "\n";
                    bob.playerTakeDamage(hauntedSpirit1.getAttack());
                    std::cout << "\nThe haunted spirit attacks you." << "\n"
                              << "Your stats: \n";
                    bob.printCharStats();
                    std::cout << "\n";
                }
            }
            else if (bob.getX() == 2 && bob.getY() == 2)
            {
                if (hauntedSpirit2.getHealth() <= 0)
                {
                    std::cout << "You have defeated the enemy." << "\n";
                }
                else
                {
                    hauntedSpirit2.enemyTakeDamage(bob.getDamage());
                    hauntedSpirit2.printEnemyStats();
                    std::cout << "You attack the enemy." << "\n";
                    std::cout << "Enemy's stats: " << "\n";
                    bob.playerTakeDamage(hauntedSpirit2.getAttack());
                    std::cout << "\nThe haunted spirit attacks you." << "\n"
                              << "Your stats: \n";
                    bob.printCharStats();
                    std::cout << "\n";
                }
            }*/
        }
        else if (command == "examine")
        {
            std::cout << "You search the room for items." << "\n";
            std::cout << "You find: " << currentRoom->getItems().getItemName() << ". " << currentRoom->getItems().getPurpose() << "\n";
            if (true /*currentRoom.hasItem(*/)
            {
                bob.addInventory(currentRoom->getItems());
            }
        }
        else if (command == "pickup")
        {

            std::cout << "You picked up " << currentRoom->getItems().getItemName() << "!\n";
            bob.addInventory(currentRoom->getItems());
        }
        else if (command == "inventory")
        {
            std::cout << "You check your inventory." << "\n";
            bob.printInventory();
        }
        else if (command == "use")
        {
            std::string item;
            std::cout << "Enter the item you want to use: ";
            std::cin >> item;

            if (item == "Health Potion" && bob.getHealth() < 100)
            {
                if (bob.getInventory().empty())
                {
                    std::cout << "You don't have any items." << "\n";
                }
                else if (bob.searchInventory(item))
                {
                    bob.useHealthPotion(healthPotion);
                    bob.removeItem(healthPotion);
                    std::cout << "You use the Health Potion." << "\n";
                    std::cout << "Your health is now: " << bob.getHealth() << "\n";
                }
                else
                {
                    std::cout << "You don't have any Health Potions." << "\n";
                }
            }
        }
        else
        {
            std::cout << "Invalid command." << "\n";
        }
        std::cout << "\n";
    }
}
