#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main()
{
    Dog piesek("Sznaucer", 3, 7);
    piesek.setName("Homok");
    piesek.setLimbNr(4);
    piesek.setProtectedAnimal(true);
    piesek.info();
    piesek.giveVoice();

    return 0;
}
