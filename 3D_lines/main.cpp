// Check wheather two 3D Lines intersect each other or Not. 

#include <GL/glut.h>
#include <iostream>
#include <cmath>

using namespace std;

// Define two lines using four points (two per line)
float line1_p1[3], line1_p2[3];
float line2_p1[3], line2_p2[3];

// Function to check if two lines intersect in 3D
bool checkIntersection() {
    float x1 = line1_p1[0], y1 = line1_p1[1], z1 = line1_p1[2];
    float x2 = line1_p2[0], y2 = line1_p2[1], z2 = line1_p2[2];
    float x3 = line2_p1[0], y3 = line2_p1[1], z3 = line2_p1[2];
    float x4 = line2_p2[0], y4 = line2_p2[1], z4 = line2_p2[2];

    // Direction vectors
    float d1x = x2 - x1, d1y = y2 - y1, d1z = z2 - z1;
    float d2x = x4 - x3, d2y = y4 - y3, d2z = z4 - z3;

    // Cross product of direction vectors
    float crossX = d1y * d2z - d1z * d2y;
    float crossY = d1z * d2x - d1x * d2z;
    float crossZ = d1x * d2y - d1y * d2x;

    // If the cross product is zero, the lines are parallel
    return !(crossX == 0 && crossY == 0 && crossZ == 0);
}

// OpenGL Display Function
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Draw Line 1 (Red)
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3fv(line1_p1);
    glVertex3fv(line1_p2);
    glEnd();

    // Draw Line 2 (Blue)
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINES);
    glVertex3fv(line2_p1);
    glVertex3fv(line2_p2);
    glEnd();

    glutSwapBuffers();
}

// OpenGL Initialization
void initOpenGL() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluPerspective(45.0, 1.0, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
}

int main(int argc, char** argv) {
    cout << "Enter coordinates for Line 1 (x1 y1 z1 x2 y2 z2): ";
    cin >> line1_p1[0] >> line1_p1[1] >> line1_p1[2] >> line1_p2[0] >> line1_p2[1] >> line1_p2[2];

    cout << "Enter coordinates for Line 2 (x3 y3 z3 x4 y4 z4): ";
    cin >> line2_p1[0] >> line2_p1[1] >> line2_p1[2] >> line2_p2[0] >> line2_p2[1] >> line2_p2[2];

    // Check intersection status
    if (checkIntersection()) {
        cout << "The lines are **intersecting** or **skew**." << endl;
    }
    else {
        cout << "The lines are **parallel** or **coincident**." << endl;
    }

    // Initialize OpenGL
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutCreateWindow("3D Line Intersection Visualization");

    initOpenGL();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
