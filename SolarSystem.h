#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include <stddef.h>

#include <GL/glut.h>

enum {
    STARTS_NUM = 10,
    TIMEPAST   = 1,
    SELFROATE  = 3
};

class Star;

class SolarSystem
{
public:
    enum STARS {
        Sun        = 0,
        Mercury    = 1,
        Venus      = 2,
        Earth      = 3,
        Moon       = 4,
        Mars       = 5,
        Jupiter    = 6,
        Saturn     = 7,
        Uranus     = 8,
        Nepture    = 9
    };

public:
    SolarSystem();
    ~SolarSystem();

    void onDisplay();
    void onUpdate();
    void onKeyboard(u_char key, int x, int y);

private:
    Star *starts[STARTS_NUM];

    GLdouble viewX, viewY, viewZ;
    GLdouble centerX, centerY, centerZ;
    GLdouble upX, upY, upZ;
};

#endif // SOLARSYSTEM_H
