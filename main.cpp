#include <stddef.h>

#include <GL/glut.h>

#include "SolarSystem.h"

const int Window_X_Pos = 50;
const int Window_Y_Pos = 50;
const int WindowWidth  = 700;
const int WindowHeight = 700;

SolarSystem solarSystem;

void onDisplay(void) {
    solarSystem.onDisplay();
}

void onUpdate(void) {
    solarSystem.onUpdate();
}

void onKeyboard(u_char key, int x, int y) {
    solarSystem.onKeyboard(key, x, y);
}


int main(int argc, char *argv[]) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);

    glutInitWindowPosition(Window_X_Pos, Window_Y_Pos);

    glutCreateWindow("Solar system");

    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);

    glutMainLoop();

    return 0;
}



