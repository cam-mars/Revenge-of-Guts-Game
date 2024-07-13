#include<iostream>
#include"Hero.h"
#include"Resources.h"
#include"Sword.h"
#ifndef GAMEPLAY_H
#define GAMEPLAY_H
using namespace std;
class Gameplay{
    private:
        Hero guts;
        Resources myResources;
    public:
        //constructors
        Gameplay();
        Gameplay(Hero myHero, Resources myResources_);
        //setters
        void chopWoodGame();
        void mineIronGame();
        bool buildFurnaceGame();
        bool buildSword();
        //getters

};
#endif