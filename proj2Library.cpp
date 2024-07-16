#include<iostream>
#include"proj2Library.h"
using namespace std;

//ignore this stat display, I am tweaking it rn
void statsDisplay(Hero myHero, Resources myResources){
    int strongestMove = 0;
    int i;
    cout << "---------------------------" << endl;
    cout << "|        Wood: " << myResources.getWood() << "       |" << endl;
    cout << "|        Iron: " << myResources.getIron() << "       |"<< endl;
    cout << "|        Health: " << myHero.getHealth() << "       |"<< endl;
    cout << "|        Current top move: " << "       |"<< endl;
    cout << myHero.getMoveRanking(1) << endl;
    cout << "---------------------------" << endl;
}
void drawMap(int xPlayer, int yPlayer){
    //Draw our picture with vectors
    vector<string> map = {
        "========================================================================================\n",
        "|                                                                                      |\n",
        "|                                                    *#%%#%%%%=                        |\n",
        "|                                                    %###%%%#%%#                       |\n",
        "|                                                     ########%                        |\n",
        "|                                                                                      |\n",
        "|                 ... .::.                                                             |\n",
        "|              ..::::. .  .::.                                                         |\n",
        "|               .=:...-...:.                                                           |\n",
        "|                  :  ..                                                               |\n",
        "|                ..:- .:..                                                             |\n",
        "|                                                                                      |\n",
        "|                                                                                      |\n",
        "|                                                          ::                          |\n",
        "|                                                        ::   ::                       |\n",
        "|                         O                             :      :                       |\n",
        "|                        /|\\                            :      :                       |\n",
        "|                        /\\                              ::  ::                        |\n",
        "|                                                          ::                          |\n",
        "|                                                                                      |\n",
        "|                                                                                      |\n",
        "|                                                                                      |\n",
        "========================================================================================\n",
    };
    vector<string> playerOne{
        "    %@",
        " :%%%@@@===",   
        " =@%====",
        "   %@+"   
    };
    
    for(int y = 0; y < map.size(); y++){
        if(y >= yPlayer && y < playerOne.size() + yPlayer){
            for(int x = 0; x < map[1].length(); x++){
                if(x >= xPlayer && x < playerOne.at(y - yPlayer).length() + xPlayer){
                    cout << playerOne[y - yPlayer][x - xPlayer];
                }
                else{
                    cout << map[y][x];
                }
            }
        }
        else{
            cout << map[y];
        }
    }
}
int moveCharacter(){
    //variables
    int xPlayer = 1;
    int yPlayer = 1;
    char userInput;
    while(userInput != 'e'){
        drawMap(xPlayer, yPlayer);
        userInput = CharacterMenu("Press wasd to move, or e to exit", "wasde", "Invalid input");
        switch(userInput){
            case 'w':
                yPlayer++;
                break;
            case 'a':
                xPlayer--;
                break;
            case 's':
                yPlayer--;
                break;
            case 'd':
                xPlayer++;
                break;
        }
    }
    return 0;
}
