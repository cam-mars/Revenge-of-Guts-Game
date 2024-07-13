#include<iostream>
#include "Sword.h"
using namespace std;
    //constructors
    Sword::Sword(Resources myResources_, Hero myHero_){
        swordName = "Dragon Slayer";
        swordPower = 1.5*myHero_.getDefense() + myHero_.getAttack();
    }
    //getters
    string Sword::getName(){
        return swordName;
    }
    int Sword::getPower(){
        return swordPower;
    }
    //setters
    void Sword::setName(string newName){
        swordName = newName;
    }