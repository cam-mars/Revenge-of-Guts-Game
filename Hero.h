#include<iostream>
#ifndef HERO_H
#define HERO_H
using namespace std;

class Hero{
    private: 
    int attack;
    int defense;
    int health;
    string name;
    static const int MAX_ATTACK = 100;
    static const int MAX_DEFENSE = 100;
    static const int MAX_HEALTH = 500;

    public:
    //constructors
    Hero();
    Hero(string nameInput);
    Hero(int attackInput, int defenseInput, int healthInput, string nameInput);
    //getters
    int getAttack() const;
    int getDefense() const;
    int getHealth() const;
    int totalStats();
    string getName();
    //setters aka training
    void trainAttack();
    void trainDefense();
    void recover();
    void setName(string newName);
    void gatherResources();
    //setters for battle
    void gotHit(int enemyAttack);
};
#endif