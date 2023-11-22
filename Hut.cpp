#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(-0.6, -0.6);

    glColor3f(0.0, 1.0, 0.0); 
    glVertex2f(0.6, -0.6);

    glColor3f(0.0, 0.0, 1.0); 
    glVertex2f(0.0, 0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); // Red color for the base
    glVertex2f(-0.3, -0.6);
    glColor3f(0.0, 1.0, 0.0); // Green color for the base
    glVertex2f(0.3, -0.6);
    glColor3f(0.0, 0.0, 1.0); // Blue color for the base
    glVertex2f(0.3, -1.0);
    glColor3f(1.0, 0.0, 0.0); // Red color for the base
    glVertex2f(-0.3, -1.0);
    glEnd();

    glBegin(GL_LINES);
    
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.4, -1.1);
    
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.4, -0.6);
    glVertex2f(0.4, -1.1);

    
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.4, -1.1);
    glVertex2f(0.4, -1.1);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("A Simple Colored Hut");

    glutDisplayFunc(display);

    glClearColor(0.0, 0.0, 0.0, 1.0);

    glutMainLoop();

    return 0;
}
