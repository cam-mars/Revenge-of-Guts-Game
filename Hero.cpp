#include<iostream>
#include "Hero.h"
using namespace std;
//constructors
    Hero::Hero(){
        attack = 10;
        defense = 10;
        health = 50;
        name = "Guts";
    }
    Hero::Hero(string nameInput){
        attack = 10;
        defense = 10;
        health = 50;
        name = nameInput;
    }
    Hero::Hero(int attackInput, int defenseInput, int healthInput, string nameInput){
        attack = attackInput;
        defense = defenseInput;
        health = healthInput;
        name = nameInput;
    }
    //getters
    int Hero::getAttack() const{
        //strong attack will boost total
        return attack;
    }
    int Hero::getDefense() const{
        //strong defense will boost sword strength
        return defense;
    }
    int Hero::getHealth() const{
        //lots of health makes training more effective
        return health;
    }
    int Hero::totalStats(){
        int total;
        //really strong attack boosts total
        if(attack > (defense + health/5 + health%5)){
            total = 1.5*attack + defense + health;
        }
        else{
            total = attack + defense + (health/5) + health%5;
        }
        return total;
    }
    string Hero::getName(){
        return name;
    }
    //setters aka training
    void Hero::trainAttack(){
            //boosted health improves training
            if((health/5+health%5) > attack + defense){
                attack += 10;
            }
            else{
                attack += 5;
            }
            health -= 10;
    }
    void Hero::trainDefense(){
            if((health/5+health%5) > attack + defense){
                defense += 10;
            }
            else{
                defense += 5;
            }
            health -= 10;
    }
    void Hero::gatherResources(){
        health -= 10;
    }
    void Hero::recover(){
        health += 50;
    }
    void Hero::setName(string newName){
        name = newName;
    }
    void Hero::gotHit(int enemyAttack){
        int damage = enemyAttack - (defense/2);
        health -= damage;
    }
