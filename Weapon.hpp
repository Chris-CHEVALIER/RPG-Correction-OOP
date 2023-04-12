#include <string>
#include <iostream>
using namespace std;
#pragma once
class Weapon
{
private:
    string name;
    int dammages;

public:
    Weapon();
    Weapon(string newName, int newDammages);
    void change(string newName, int newDammages);
    void display() const;
    int getDammages();
};
