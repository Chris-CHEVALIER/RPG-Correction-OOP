#include "Character.cpp"
#include "Weapon.cpp"

int main()
{
    Weapon baton("batton", 11);
    Weapon knife("couteau", 50);
    Character amine("Amine", 99, 34, baton);
    Character othmane("Othmane", 99, 30, knife);
    amine.display();
    othmane.display();
    othmane.attack(amine);
    amine.display();
    othmane.display();
    othmane.takeLifePotion(51);
    othmane.display();
    return 0;
}