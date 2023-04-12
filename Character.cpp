#include "Character.hpp"

Character::Character()
{
    life = 100;
    mana = 100;
    name = " ";
    
}
Character::Character(string newName, int newLife, int newMana,Weapon newWeapon)
{
    life = newLife;
    mana = newMana;
    name = newName;
    equipedWeapon=newWeapon;
}

Character::~Character() {}

void Character::receiveDammages(int dammages)
{
    life -= dammages;
    if (life < 0)
        life = 0;
}

void Character::attack(Character &target)
{
    target.receiveDammages(equipedWeapon.getDammages());
}

void Character::takeLifePotion(int lifePoints)
{
    life += lifePoints;
    if (life > 100)
        life = 100;
}

void Character::switchWeapon(string weaponName, int weaponDammages)
{
    equipedWeapon.change(weaponName,weaponDammages);
}

bool Character::isAlive() const
{
    return life > 0;
}

void Character::display() const
{
    cout << name << " a " << life 
    << " points de vie et " << mana 
    << " points de magie." << endl;
}