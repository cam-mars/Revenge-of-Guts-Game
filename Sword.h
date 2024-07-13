#include<iostream>
#include"Resources.h"
#include"Hero.h"
#ifndef SWORD_H
#define SWORD_H
using namespace std;
class Sword{
    private:
    string swordName;
    int swordPower;
    Resources myResources;
    Hero myHero;
    
    public:
    //constructors
    Sword(Resources myResources_, Hero myHero_);
    //getters
    string getName();
    int getPower();
    //setters
    void setName(string newName);
};
#endif