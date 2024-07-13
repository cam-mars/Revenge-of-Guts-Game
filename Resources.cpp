#include<iostream>
#include "Resources.h"
#include "Hero.h"
using namespace std;
//constructors
    Resources::Resources(){
        wood = 0;
        iron = 0;
        furnace = false;
        
    }
    Resources::Resources(int woodInput, int ironInput, bool furnaceInput){
        wood = woodInput;
        iron = ironInput;
        furnace = furnaceInput;
    }
    //getters
    int Resources::getWood(){
        return wood;
    }
    int Resources::getIron(){
        return iron;
    }
    bool Resources::getFurnace(){
        return furnace;
    }
    //setters
    //ASK ABOUT DOING THIS WITH LIMITED HEALTH
    void Resources::chopWood(){
        wood += 2;
    }
    void Resources::mineIron(){
        iron += 2;
    }
    bool Resources::buildFurnace(){
        if(wood < 10 || iron < 10){
            furnace = false;
            return false;
        }
        else{
            wood -= 10;
            iron -= 10;
            furnace = true;
            return true;
        }
    }
    void Resources::buildSword(){
        wood = 0;
        iron = 0;
    }