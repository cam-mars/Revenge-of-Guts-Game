#ifndef MOVEMENT_H
#define MOVEMENT_H
#include <iostream>
#include <string>
using namespace std;

const string MAGENTA = "\033[35m";
const string GREEN = "\033[32m";
const string BLUE = "\033[34m";
const string ORANGE = "\033[33m";
const string GREY = "\033[90m";
const string RESET = "\033[0m";

class Map {
public:
    // Constructor
    Map();

    // Public methods
    void Setup();
    void DrawMap();
    void UserInput();
    void MovementLogic();

private:
    // Constants
    static const int width = 150;
    static const int length = 20;

    // Private methods
    void CharacterMenu(const std::string& interaction, const std::string& option1, const std::string& invalidMsg);

    // Private variables
    bool gameOver;
    int x, y, xTree, yTree, xIron, yIron, xcharNPC, ycharNPC, xPortal, yPortal;
};

#endif // MAP_H
