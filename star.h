#ifndef STAR_H
#define STAR_H

#include <GL/glut.h>

class Star
{
public:
    Star(GLfloat radius, GLfloat distance,
         GLfloat speed, GLfloat selfSpeed,
         Star* parent);

    void drawStar();
    virtual void draw() { drawStar(); }
    virtual void update(long timeSpan);

protected:
    float alphaSelf, alpha;

    GLfloat radius;
    GLfloat speed, selfSpeed;
    GLfloat distance;
    GLfloat rgbaColor[4];

    Star *parent;
};


class Planet : public Star {
public:
    Planet(GLfloat radius, GLfloat distance,
           GLfloat speed, GLfloat selfSpeed,
           Star* parent, GLfloat rgbColor[]);

public:
    void drawPlannet();
    virtual void draw() { drawPlannet(); drawStar();}

};

class LightPlanet : public Planet {
public:
    LightPlanet(GLfloat Radius, GLfloat Distance,
                GLfloat Speed,  GLfloat SelfSpeed,
                Star* Parent, GLfloat rgbColor[]);


    void drawLight();
    virtual void draw() { drawLight(); drawPlannet(); drawStar(); }
};

#endif // STAR_H
