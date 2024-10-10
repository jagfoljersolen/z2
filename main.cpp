#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
    Dog piesek("Sznaucer", 3, 7);
    piesek.setName("Homok");
    piesek.setLimbNr(4);
    piesek.setProtectedAnimal(true);
    piesek.info();
    piesek.giveVoice();

    cout << endl;

    int myszy[5];
    Cat kotek(4, "Lucjusz", false);
    kotek.setLevelOfMouseHunting(10);
    kotek.initCat(10, myszy);
    kotek.initMice(8, 6, 12, 9, 14);
    kotek.info();
    kotek.giveVoice();

    cout << endl;

    Animal zwierzeta[4] = {
        Animal(2, "Papuga", true),
        Animal(2, "Kura", false),
        Animal(4, "Swinia", false),
        Animal(0, "Wieloryb", true)
    };

    for (auto &i: zwierzeta) {
        i.info();
        cout << endl;
    }
    cout << "Liczba zwierzat chronionych: " << Animal::howManyProtectedAnimals(zwierzeta, 4) << endl;

    Dog psy[4] = {
        piesek,
        Dog("Jamnik", 3, 8),
        Dog("Labrador", 10, 4),
        Dog("Spaniel", 5, 8)
    };

    cout << "Psy, ktorych poziom tropiciela jest wiekszy niz przewodnika: " << endl;
    Dog::howManyTrackerDogs(psy, 4);

    Cat kotek2(4, "Charlie", false);
    Cat kotek3(3, "Gato", true);
    Cat kotek4(4, "Feliks", true);

    kotek2.initMice(3, 3, 4, 2, 1);
    kotek3.initMice(4, 2, 0, 1, 0);
    kotek4.initMice(10, 13, 15, 17, 11);
    Cat koty[4] = {
        kotek, kotek2, kotek3, kotek4
    };

    cout << "Liczba myszy upolowana przez kazdego kota w przeciagu 5 lat: " << endl;
    Cat::howManyCats(koty, 4);
    return 0;
}
