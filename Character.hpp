#include <string>
#include <iostream>
#include "Weapon.cpp"
using namespace std;
#pragma once

class Character
{
private:
    string name;
    int life;
    int mana;
    Weapon equipedWeapon;

public:
    Character();
    Character(string newName, int newLife, int newMana,Weapon newWeapon);
    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(string weaponName, int weaponDammages);
    bool isAlive() const;
    void display() const;
    ~Character();
};
