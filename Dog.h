
#ifndef DOG_H
#define DOG_H
#include "Animal.h"


class Dog : public Animal {
private:
    string breed;
    int levelOfGuideSkills=0;
    int levelOfTrackerSkills=0;
public:
    Dog(string breed, int levelOfGuideSkills, int levelOfTrackerSkills);
    Dog(int limbNr, string name, bool protectedAnimal);
    Dog();
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();
    static void howManyTrackerDogs(Dog dogs[], int size);
};



#endif //DOG_H
