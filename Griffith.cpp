#include<iostream>
#include "Griffith.h"
using namespace std;
    //constructors
    Griffith::Griffith(){
        attack = 60;
        defense = 60;
        health = 400;
    }
    Griffith::Griffith(int attackInput, int defenseInput, int healthInput){
        attack = attackInput;
        defense = defenseInput;
        health = healthInput;
    }
    //getters
    int Griffith::getAttack(){
        return attack;
    }
    int Griffith::getDefense(){
        return defense;
    }
    int Griffith::getHealth(){
        return health;
    }
    void Griffith::getMoves(){
        //80% chance of moves[0] which keeps the attack the same
        //20% chance of moves[1] which increases the attack by 50% but drops the defense by 50%
    }
    //setters
    int Griffith::gotHit(int enemyAttack){
        int damage = enemyAttack - (defense/2);
        health -= damage;
    }