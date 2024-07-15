#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>
#include "csci1300Library.h"
#include "Movement.h"
using namespace std;

//Global
bool gameOver;
const int width = 150;
const int length = 20;
int x, y, xTree, yTree, xRock, yRock, xcharNPC, ycharNPC, xPortal, yPortal;
enum eMovement{
    Stop, left, right, down, up
};
eMovement dir;

void Setup(){
    //Don't let the charcter move before the user starts inputting the movement values
    gameOver = false;
    //Map Dimensions 
    x = width/4;
    y = length/2;
    //Randomly generate the objects around the map
    xTree = 20;
    yTree = 5;

    xRock = 40;
    yRock = 10;

    xcharNPC = 60;//rand() % width;
    ycharNPC = 15;//rand() % length;

    xPortal = 80;
    yPortal = 19;
}

void DrawMap(){
    // Map Reset Every Iteration
    system("clear");

    // Draw top border
    for (int i = 0; i < width + 2; i++) {
        cout << "=";
    }
    cout << endl;

    // Draw the map with side borders
    string tree;
    tree = "     \n      ... .::.\n     ..::::. .  .::.\n   .-            .-.\n  .=.             :.\n   :..   .: :.. ...:.\n    .=:...-...:.-*.\n   .:  ...\n      :. .:\n      .:- .:.\n      .::::.:... ";
    string rock;
    rock =  "..++;;:..      \n.+;:..+;;;:;;    \n.x++;.:;++;;:...  \n:: :..:.. :. .";
    //string NPC;
    //NPC = "    O\n /|\\n /  ";
    //string charNPC;
    //charNPC = "    O\n /|\\n / ";
    //string playerOne;
    //playerOne = "*##*%@%%%##**=-     \n+=#@@@*=%%%%%%%%%#*+ \n++#%%%%%%%**+*%%@%%+ \n-++=%%#**%#*-";           
    //"\n+%%%#%@*+        \n##%%##%@#*#     \n:=@@@%%##@@%*@+     \n@@@@%%%%+%@#%%+     \n@@%%%%@%++%@@@+     \n-*@%%@@@%*%@@=      \n**@##*%*%*#%-       \n-:##%*-#%*#=         \n:%%=...%**+          \n*#....-%*- ";     
    //"\n.+*++.....=*-.";
    
    //y coordinate
    for (int i = 0; i < length; i++) {
        //x coordinate
        for (int j = 0; j < width; j++) {
            if (j == 0) {
                cout << "|";
            }
            if(i == y && j == x){
                //Character Ascii Art
                //cout << playerOne << endl;
            }
            if(i == yTree && j == xTree){
                //Tree Ascii Art
                cout << tree << endl;
            }
            if(i == yRock && j == xRock){
                //Rock Art
                cout << rock << endl;
            }
            else if(i == ycharNPC && j == xcharNPC){
                //Rock Art
                //cout << charNPC << endl;

            }
            if(i == yPortal && j == xPortal){
                //Rock Art
            }
            else{
            cout << " ";
            }
            //Right Wall
            if (j == width - 1) {
                cout << "|";
            }
        }
        cout << endl;
    }

    // Draw bottom border
    for (int i = 0; i < width + 2; i++) {
        cout << "=";
    }
    cout << endl;
}

void UserInput(){
    char inputOne;
    string interaction = "Press F to interact";

    //If hit tree
    if(x == xTree - 1 && y == yTree - 1){
        CharacterMenu(interaction, "F", "Invalid selection");
    }
    //If hit iron
    if(x == xRock - 1 && y == yRock - 1){
        CharacterMenu(interaction, "F", "Invalid selection");
    }
    //If hit NPC
    if(x == xcharNPC - 1 && y == ycharNPC - 1){
        CharacterMenu(interaction, "F", "Invalid selection");
    }
    //If hit barracks
    if(x == xTree - 1 && y == yTree - 1){
        CharacterMenu(interaction, "F", "Invalid selection");
    }
}
void MovementLogic(){
}

int main(){
    Setup();
    while (!gameOver){
        DrawMap();
        UserInput();
        MovementLogic();

    }
    return 0;
}
