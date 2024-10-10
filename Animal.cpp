
#include "Animal.h"

#include <iostream>

Animal::Animal() : limbNr(0), name(""),protectedAnimal(true){
    cout << "Konstruktor bezparametrowy klasy bazowej Animal" << endl;
}
Animal::Animal(int limbNr, string name, bool protectedAnimal)
    : limbNr(limbNr), name(name), protectedAnimal(protectedAnimal) {}

void Animal::setName(string name) {
    this->name = name;
}
string Animal::getName() {
    return name;
}
void Animal::setLimbNr(int limbNr) {
    this->limbNr = limbNr;
}
int Animal::getLimbNr() {
    return limbNr;
}
void Animal::setProtectedAnimal(bool protectedAnimal) {
    this->protectedAnimal = protectedAnimal;
}
bool Animal::getProtectedAnimal() {
    return protectedAnimal;
}
void Animal::giveVoice() {
    cout << "Chrum, miau, hau, piiii" << endl;
}

void Animal::info() {
    cout << "Liczba konczyn: " << limbNr << endl
    << "Nazwa: " << name << endl
    << "Czy pod ochrona?: " << (protectedAnimal ? "Tak" : "Nie")<< endl;
}










