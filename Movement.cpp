#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Movement.h"
using namespace std;

//Global
bool gameOver;
const int width = 150;
const int length = 20;
int x, y, xTree, yTree, xIron, yIron, xShed, yShed, xPortal, yPortal;
enum eMovement{
    Stop, left, right, down, up
};
eMovement dir;

void Setup(){
    //Don't let the charcter move before the user starts inputting the movement values
    gameOver = false;
    dir = Stop;
    //Map Dimensions 
    x = width/4;
    y = length/2;
    //Randomly generate the objects around the map
    xTree = rand() % width;
    yTree = rand() % length;

    xIron = rand() % width;
    yIron = rand() % length;

    xShed = rand() % width;
    yShed = rand() % length;

    xPortal = rand() % width;
    yPortal = rand() % length;
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
    string NPC;
    NPC = "    O\n /|\\n / \ ";
    
    for (int i = 0; i < length; i++) 
    {
        for (int j = 0; j < width; j++) {
            if (j == 0) {
                cout << "|";
            }
            if(i == y && j == x){
                //Character Ascii Art
            }
            else if(i == yTree && j == xTree){
                //Tree Ascii Art
                cout << tree << endl;
            }
            else if(i == yIron && j == xIron){
                //Rock Art
                cout << rock << endl;
            }
            else if(i == yShed && j == xShed){
                //Rock Art
            }
            else if(i == yPortal && j == xPortal){
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
