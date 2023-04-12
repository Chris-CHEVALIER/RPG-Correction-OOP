#include "Weapon.hpp"
#pragma once
Weapon::Weapon()
{
    name = "épee en bois";
    dammages = 10;
}
Weapon::Weapon(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

void Weapon::change(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

int Weapon::getDammages(){
    return dammages;
}

void Weapon::display() const
{
    cout << name << " fait " << dammages
     << " points de dégat." << endl;
}

