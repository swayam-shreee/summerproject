#include <iostream>
#include <vector>
#include <string>

#include "map.hpp"
#include "Character.hpp"

int main()
{
    std::vector<std::vector<Room>> map(4, std::vector<Room>(4));

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

    map[0][0] = mysteriousForest;
    map[0][1] = abandonedCottage;
    map[0][2] = overgrownGarden;
    map[0][3] = ruinedChapel;
    map[1][0] = foggyPath;
    map[1][1] = enchantedPond;
    map[1][2] = hiddenClearing;
    map[1][3] = secretLibrary;
    map[2][0] = creepyGraveyard;
    map[2][1] = cryptEntrance;
    map[2][2] = undergroundPassage;
    map[2][3] = shadowyAlcove;
    map[3][0] = oldMansionGate;
    map[3][1] = dustyFoyer;
    map[3][2] = grandBallroom;
    map[3][3] = forbiddenStudy;

    Character bob;

    while (true)
    {
        std::cout << "Enter your command: ";
        std::string command;
        std::cin >> command;

        if (command == "quit")
        {
            break;
            std::cout << "You have quit the game." << "\n";
        }
        else if (command == "look")
        {
            std::cout << "You are in the " << map[bob.getY()][bob.getX()].getRoomName() << ". " << map[bob.getY()][bob.getX()].getRoomDescription() << "\n";
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
        else
        {
            std::cout << "Invalid command." << "\n";
        }
    }
}
