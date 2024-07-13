#include<iostream>
#include "Gameplay.h"
#include "Griffith.h"
#include "csci1300Library.h"
using namespace std;
int main(){
    Hero myHero;
    Resources myResources;
    Gameplay myGameplay(myHero, myResources);
    string swordName;
    string inputFileName, outputFileName;

    string menu1 = "Select an option:\n1. Gather resources\n2. Train\n3. Recover\n4. Build a sword\n5. Go fight Griffith\n6. Quit";
    string menu2 = "Select an option:\n1. Chop trees for wood\n2. Mine for iron\n3. Go back";
    string menu3 = "Select an option:\n1. Train attack\n2. Train defense\n3. Go back";
    string menu4 = "Select an option:\n1. Save and quit\n2. Quit without saving\n3. Go back";
    string menu5 = "Select an option:\n1. Save to an existing file\n2. Create a new file\n3. Go back";

    char input1, input2, input3, input4, input5;
    input1 = CharacterMenu(menu1, "123456", "Invalid Selection.");
    while(input4 != '1' || input4 != '2'){
    switch(input1){
        case '1': input2 = CharacterMenu(menu2, "123", "Invalid selection.");
            while(input2 != '3'){
            switch(input2){
                case '1': if(myHero.getHealth() > 10){
                    //DOES THIS MODIFY MY HEROS STATS AND RESOURCES
                    myGameplay.chopWoodGame();
                    }
                    else{
                        cout << "Not enough health. Go recover!" << endl;
                    }
                    break;
                case '2': if(myHero.getHealth() > 10){
                    myGameplay.mineIronGame();
                    }
                    else{
                        cout << "Not enough health. Go recover!" << endl;
                    }
                    break;
                }
            }
            break;
        case '2': while(input3 != '3'){
        input3 = CharacterMenu(menu3, "123", "Invalid selection.");
            switch(input3){
                case '1': if(myHero.getHealth() >= 40){
                    myHero.trainAttack();
                    }
                    else{
                        cout << "You're too tired! Go recover!" << endl;
                    }
                    break;
                case '2': if(myHero.getHealth() >= 40){
                    myHero.trainDefense();
                    }
                    else{
                        cout << "You're too tired! Go recover!" << endl;
                    }
                    break;
            }
            }
            break;
        case '3': myHero.recover();
            cout << "You're all rested up!" << endl;
        case '4':
            if(myGameplay.buildSword()){
                Sword mySword(myResources, myHero);
                cout << "What would you like to name your sword?" << endl;
                getline(cin, swordName);
                mySword.setName(swordName);
            }
            else{
                cout << "Not enough resources for a sword. Keep going!" << endl;
            }
            break;
        case '5': 
            if(myHero.totalStats() >= 200 && myGameplay.buildSword()){
                cout << "Let's go fight Griffith!" << endl;
            }
            else{
                cout << "You need to get stronger to have a chance of defeating him" << endl;
            }
        break;
        case '6': while(input4 != '3'){
            input4 = CharacterMenu(menu4, "123", "Invalid selection.");
            switch(input4){
                case '1': while(input5 != 3){
                    input5 = CharacterMenu(menu5, "123", "Invalid Selection");
                    switch(input5){
                        //WHAT'S WRONG HERE
                        case '1': cout << "What is the file name?" << endl;
                        getline(cin, inputFileName);
                        ;
                        if(outputFile.fail()){
                            ofstream outputFile(inputFileName);
                        }
                        outputFile << "Hero stats:\nAttack: " << myHero.getAttack()
                         << "\nDefense: "<< myHero.getDefense() << "\nHealth: " << myHero.getHealth() << endl;
                        }
                    }
                break;
                case '2': cout << "What would you like to name the file?" << endl;
                getline(cin, outputFileName);
                ofstream outputFile(outputFileName);
                outputFile << "Hero stats:\nAttack: " << myHero.getAttack()
                         << "\nDefense: "<< myHero.getDefense() << "\nHealth: " << myHero.getHealth() << endl;
                }
            }
        }

    }
}