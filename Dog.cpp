#include "Dog.h"

#include <iostream>

Dog::Dog(){
    cout << "Konstruktor bezparametrowy klasy pochodnej Dog" << endl;
}

Dog::Dog(string breed, int levelOfGuideSkills, int levelOfTrackerSkills) {
    this->breed = breed;
    this->levelOfGuideSkills = levelOfGuideSkills;
    this->levelOfTrackerSkills = levelOfTrackerSkills;
    cout << "konstruktor klasy pochodnej Dog" << endl;
}

Dog::Dog(int limbNr, string name, bool protectedAnimal) : Animal(limbNr, name, protectedAnimal) {
    cout << "Konstruktor klasy Dog  inicjalizujący tylko składowe klasy Animal" << endl;
};

int Dog::getSkillLevel(int type) {
    if (type == 1) {
        return levelOfGuideSkills;
    }
    if (type == 2) {
        return levelOfTrackerSkills;
    }
    return 0;
}
void Dog::info() {
    cout << "Informacje o piesku: " << endl;
    Animal::info();
    cout << "Rasa: " << breed << endl;
    cout << "Poziom umiejętności przewodnika: " << levelOfGuideSkills << endl;
    cout << "Poziom umiejętności tropiciela: " << levelOfTrackerSkills << endl;

}
void Dog::setSkillLevel(int type, int value) {
    if (value < 1 || value > 10) {
        cout << "Podaj wartosc z zakresu <1,10>" << endl;
        return;
    }
    if (type == 1) {
        levelOfGuideSkills = value;
    }else if (type == 2) {
        levelOfTrackerSkills = value;
    }else {
        cout << "Niepoprawny typ umiejętności." << endl;
    }
}
void Dog::giveVoice() {
    cout << "Hau hau" << endl;
}

void Dog::howManyTrackerDogs(Dog dogs[], int size) {


    for (int i = 0; i < size; i++) {
        if (dogs[i].levelOfTrackerSkills > dogs[i].levelOfGuideSkills) {
            cout << dogs[i].breed << endl;
        }
    }
}



