
#ifndef CAT_H
#define CAT_H
#include "Animal.h"


class Cat : public Animal{
private:
    int levelOfMouseHunting = 0;
    int mice[5];
public:
    Cat(int limbNr, string name, bool protectedAnimal);
    Cat();
    void initMice(int y1, int y2, int y3, int y4, int y5);
    void initCat(int levelOfMouseHunting, int mice[5]);
    void setLevelOfMouseHunting(int value);
    int getLevelOfMouseHunting();
    int getMice(int index);
    void giveVoice();
    void info();
    static void howManyCats(Cat cat[], int size);
};



#endif //CAT_H
