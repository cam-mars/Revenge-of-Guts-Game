#include<iostream>
#ifndef RESOURCES_H
#define RESOURCES_H
using namespace std;
class Resources{
    private:
    int wood;
    int iron;
    bool furnace;
    int MAX_WOOD = 20;
    int MAX_IRON = 20;

    public:
    //constructors
    Resources();
    Resources(int woodInput, int ironInput, bool furnaceInput);
    //getters
    int getWood();
    int getIron();
    bool getFurnace();
    //setters
    void chopWood();
    void mineIron();
    bool buildFurnace();
    void buildSword();
};
#endif