
#include "Cat.h"
#include "iostream"
using namespace std;

Cat::Cat(int limbNr, string name, bool protectedAnimal) : Animal(limbNr,name, protectedAnimal) {
    cout << "Konstruktor klasy pochodnej Cat" << endl;
}
Cat::Cat() {
    cout << "Konstruktor bezparametrowy klasy pochodnej Cat" << endl;
    for(int & i : mice) {
        i = 0;
    }
};
void Cat::initMice(int y1, int y2, int y3, int y4, int y5) {
    mice[0] = y1;
    mice[1] = y2;
    mice[2] = y3;
    mice[3] = y4;
    mice[4] = y5;
}
void Cat::initCat(int levelOfMouseHunting, int mice[5])
{
    this->levelOfMouseHunting = levelOfMouseHunting;
    for (int i = 0; i < 5; i++) {
        this->mice[i] = mice[i];
    }

}
void Cat::setLevelOfMouseHunting(int value) {
    this->levelOfMouseHunting = value;
}
int Cat::getLevelOfMouseHunting() {
    return this->levelOfMouseHunting;
}
int Cat::getMice(int index) {
    return mice[index];
}
void Cat::giveVoice() {
    cout << "Miau miau" << endl;
}
void Cat::info() {
    cout << "Informacje o kotku: " << endl;
    Animal::info();
    cout << "Poziom lowienia myszy: " << levelOfMouseHunting << endl;
    cout << "Upolowane myszy: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Rok" << i+1 << ": " << mice[i] << endl;
    }
}

void Cat::howManyCats(Cat cat[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += cat[i].getMice(j);
        }
        cout << cat[i].getName() << ": " << sum << endl;
    }
}










