#include<iostream>
#include"Gameplay.h"
using namespace std;
    //constructors
    Gameplay::Gameplay(){
        guts = Hero();
        myResources = Resources();
    }
    Gameplay::Gameplay(Hero myHero, Resources myResources_){
        guts = myHero;
        myResources = myResources_;
    }
    //setters
    void Gameplay::chopWoodGame(){
        myResources.chopWood();
        guts.gatherResources();
    }
    void Gameplay::mineIronGame(){
        myResources.mineIron();
        guts.gatherResources();
    }
    bool Gameplay::buildFurnaceGame(){
        if(!myResources.buildFurnace()){
            cout << "Not enough resources. Keep farming!" << endl;
        }
        else{
            cout << "Furnace built." << endl;
        }
    }
    bool Gameplay::buildSword(){
        if(myResources.getWood() == MAX_WOOD && myResources.getIron() == MAX_IRON
        && myResources.getFurnace() == true){
            myResources.buildSword();
            Sword(myResources, guts);
            return true;
        }
        else{
            return false;
        }
    }
    //getters