
#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
private:
    int limbNr;
    string name;
    bool protectedAnimal;

public:
    Animal();
    Animal(int limbNr, string name, bool protectedAnimal = true);
    void setLimbNr(int limbNr);
    void setName(string name);
    void setProtectedAnimal(bool protectedAnimal);
    int getLimbNr();
    string getName();
    bool getProtectedAnimal();
    void giveVoice();
    void info();

};



#endif //ANIMAL_H
