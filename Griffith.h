#include<iostream>
#ifndef GRIFFITH_H
#define GRIFFITH_H
using namespace std;
class Griffith{
    private:
    int attack, defense, health;
    string moves[2];

    public:
    //constructors
    Griffith();
    Griffith(int attackInput, int defenseInput, int healthInput);
    //getters
    int getAttack();
    int getDefense();
    int getHealth();
    void getMoves();
    //setters
    int gotHit(int enemyAttack);
};
#endif