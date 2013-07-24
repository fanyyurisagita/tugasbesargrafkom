#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include "imageloader.h"
#include "vec3f.h"
#endif

static GLfloat spin, spin2 = 0.0;
float angle = 0;
using namespace std;

float lastx, lasty;
GLint stencilBits;
static int viewx = 23;
static int viewy = 50;
static int viewz = 90;

float rot = 0;
//objek
void masjid()
{
//masjid
glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(8,6,8);
glScalef(2.0,1.0,2.0);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(0.1,0.1,0.2);
glTranslatef(8,6,-12);
glScalef(3.0,1.0,0.1);
glutSolidCube(10);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(22,6,-13);
glScalef(1.0,2.0,1.0);
glutSolidCube(5);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(-5,6,-13);
glScalef(1.0,2.0,1.0);
glutSolidCube(5);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(8.3,10,-12);
glScalef(6.4,0.5,1.5);
glutSolidCube(5);
glPopMatrix();
//lorong depan
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(8,4,28);
glScalef(1.0,1.0,0.1);
glutSolidCube(10);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(3.5,4,29);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(3.5,4,32);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(3.5,4,35);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(3.5,4,38);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();
//
glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(12.5,4,29);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(12.5,4,32);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(12.5,4,35);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(12.5,4,38);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();
//
glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(8,10,29);
glScalef(3.5,0.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(8,10,32);
glScalef(3.5,0.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(8,10,35);
glScalef(3.5,0.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(8,10,38);
glScalef(3.5,0.5,0.5);
glutSolidCube(3);
glPopMatrix();

//lorong samping kanan
glPushMatrix();
glColor3f(0.0,0.0,0.0);
glTranslatef(28,4,8);
glScalef(0.3,1.0,1);
glutSolidCube(10);
glPopMatrix();
//
glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(29,4,12.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(32,4,12.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(35,4,12.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(38,4,12.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();
//
glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(29,4,3.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(32,4,3.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(35,4,3.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(38,4,3.5);
glScalef(0.5,3.5,0.5);
glutSolidCube(3);
glPopMatrix();
//
glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(29,10,8);
glScalef(0.5,0.5,3.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(32,10,8);
glScalef(0.5,0.5,3.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(35,10,8);
glScalef(0.5,0.5,3.5);
glutSolidCube(3);
glPopMatrix();

glPushMatrix();
glColor3f(0.7,0.7,1);
glTranslatef(38,10,8);
glScalef(0.5,0.5,3.5);
glutSolidCube(3);
glPopMatrix();



//kaligrafi depan
//la
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(27,9.6,23);
glScalef(0.1,4.5,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(25.9,3.5,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(25,9.6,23);
glScalef(0.1,4.5,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(26,2.75,23);
glScalef(0.1,0.5,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(25.9,2.2,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(27,1.2,23);
glScalef(0.1,0.8,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(25,1.2,23);
glScalef(0.1,0.8,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(25.9,0.2,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// i
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(23.3,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// lailaha
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(21.4,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(19.8,9.5,23);
glScalef(0.1,4.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(18.8,0.4,23);
glScalef(1.8,0.3,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(16.5,1.4,23);
glScalef(0.1,1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(18.6,1.4,23);
glScalef(0.1,1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(17.6,2.7,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(17.6,4.7,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(17.6,6.3,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(18.5,5.5,23);
glScalef(0.1,0.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(16.5,5.5,23);
glScalef(0.1,0.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(17.6,7,23);
glScalef(0.1,0.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(17.4,7.9,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(16.5,11.9,23);
glScalef(0.1,2.9,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(18.5,11.9,23);
glScalef(0.1,2.9,3.6);
glutSolidCube(2.8);
glPopMatrix();
// i
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(14.9,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
//lawllah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(13.3,11.9,23);
glScalef(0.1,2.9,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(11.3,11.3,23);
glScalef(0.1,2.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(9.3,11.9,23);
glScalef(0.1,2.9,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(11.3,7.9,23);
glScalef(1.4,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// - ha
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(8.4,15.8,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// - ha
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(8.4,14,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(7.5,14.8,23);
glScalef(0.1,0.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
//muhammaddara
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(11.3,5.3,23);
glScalef(0.1,1.2,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(13.3,6.1,23);
glScalef(0.1,0.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(12.2,7,23);
glScalef(0.75,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(12.2,5.3,23);
glScalef(0.75,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(12.3,3.6,23);
glScalef(0.75,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(13.2,2.2,23);
glScalef(0.1,1.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(10.3,0.5,23);
glScalef(2.2,0.3,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(9.3,3.9,23);
glScalef(0.1,2.2,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(8.5,5.3,23);
glScalef(0.6,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(8.5,3.3,23);
glScalef(0.7,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(7.5,6,23);
glScalef(0.1,0.6,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(7.4,2.1,23);
glScalef(0.1,1,3.6);
glutSolidCube(2.8);
glPopMatrix();
//rosulullah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(5.5,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(3.5,9.9,23);
glScalef(0.1,4.3,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(1.5,9.9,23);
glScalef(0.1,4.3,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-0.8,13.3,23);
glScalef(0.1,1.8,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-3.1,14.1,23);
glScalef(0.1,1.3,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-2,10.9,23);
glScalef(0.9,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(1.1,4,23);
glScalef(3,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-3,5,23);
glScalef(0.1,0.8,3.6);
glutSolidCube(2.8);
glPopMatrix();
// | wau
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-0.8,3.5,23);
glScalef(0.1,1.9,3.6);
glutSolidCube(2.8);
glPopMatrix();
// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-1.9,6,23);
glScalef(0.9,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();
// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(1,0.5,23);
glScalef(3.1,0.3,3.6);
glutSolidCube(2.8);
glPopMatrix();
// lawlah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-5,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-7,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-9,8,23);
glScalef(0.1,5.7,3.6);
glutSolidCube(2.8);
glPopMatrix();
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-11,11.7,23);
glScalef(0.1,3,3.6);
glutSolidCube(2.8);
glPopMatrix();

// - ha atas
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-10,15.8,23);
glScalef(0.8,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();

// - ha bawah
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-10,7.4,23);
glScalef(0.8,0.1,3.6);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-7,0.5,23);
glScalef(1.5,0.3,3.6);
glutSolidCube(2.8);
glPopMatrix();


//kaligrafi pinggir kiri
//la
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,9.6,27);
glScalef(0.1,4.5,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,3.5,26);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,9.6,25);
glScalef(0.1,4.5,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,2.75,26);
glScalef(0.1,0.5,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,2.2,26);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,0.2,26);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,1.2,25);
glScalef(0.1,0.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,1.2,27);
glScalef(0.1,0.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// i
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,23.4);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// lailaha
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,21.16);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,9.5,19.56);
glScalef(0.1,4.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12,0.4,20);
glScalef(0.1,0.3,2.6);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,1.4,16.26);
glScalef(0.1,1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,1.4,18.36);
glScalef(0.1,1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,2.7,17.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,4.7,17.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();


// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,6.3,17.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,5.5,18.46);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,5.5,16.46);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,7,17.56);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();


// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,7.9,17.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.9,16.46);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.9,18.46);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// i
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,14.86);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

//lawllah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.9,13.26);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.3,11.26);
glScalef(0.1,2.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.9,9.26);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,7.9,11.26);
glScalef(0.1,0.1,1.4);
glutSolidCube(2.8);
glPopMatrix();

// - ha
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,15.8,8.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// - ha
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,14,8.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,14.8,7.46);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

//muhammaddara

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,5.3,11.26);
glScalef(0.1,1.2,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,6.1,13.26);
glScalef(0.1,0.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.2,7,12.16);
glScalef(0.1,0.1,0.75);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.2,5.3,12.16);
glScalef(0.1,0.1,0.75);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.2,3.6,12.26);
glScalef(0.1,0.1,0.75);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,2.2,13.16);
glScalef(0.1,1.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,0.5,10.8);
glScalef(0.1,0.3,1.8);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,3.9,10.26);
glScalef(0.1,2.2,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,5.3,9.46);
glScalef(0.1,0.1,0.6);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,3.3,9.46);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,6,8.46);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,2.1,8.36);
glScalef(0.1,1,0.1);
glutSolidCube(2.8);
glPopMatrix();


//rosulullah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,6.46);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,9.9,4.46);
glScalef(0.1,4.3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,9.9,2.46);
glScalef(0.1,4.3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,13.3,0.16);
glScalef(0.1,1.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,14.1,-2.14);
glScalef(0.1,1.3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.1,-3.24);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,4,1.1);
glScalef(0.1,0.1,3.8);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,5,-3.96);
glScalef(0.1,0.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// | wau
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,3.5,-1.76);
glScalef(0.1,1.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,6,-2.86);
glScalef(0.1,0.1,0.9);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,0.5,1);
glScalef(0.1,0.3,3.8);
glutSolidCube(2.8);
glPopMatrix();

// lawlah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,-5);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,-7);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,8,-9);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,11.7,-11);
glScalef(0.1,3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// - ha atas
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,15.8,-10);
glScalef(0.1,0.1,0.8);
glutSolidCube(2.8);
glPopMatrix();

// - ha bawah
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,7.4,-10);
glScalef(0.1,0.1,0.8);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-12.1,0.5,-7);
glScalef(0.1,0.3,1.5);
glutSolidCube(2.8);
glPopMatrix();

//KALIGRAFI SAMPING KANAN
//la
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,9.6,-11);
glScalef(0.1,4.5,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,3.5,-10);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,9.6,-9);
glScalef(0.1,4.5,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,2.75,-10);
glScalef(0.1,0.5,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,2.2,-10);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,0.2,-10);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,1.2,-9);
glScalef(0.1,0.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,1.2,-11);
glScalef(0.1,0.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// i
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,-7.4);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// lailaha
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,-5.16);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,9.5,-3.56);
glScalef(0.1,4.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,0.4,-1.6);
glScalef(0.1,0.3,2.8);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,1.4,0.26);
glScalef(0.1,1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,1.4,2.36);
glScalef(0.1,1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,2.7,1.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,4.7,1.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,6.3,1.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,5.5,2.46);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,5.5,0.46);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,7,1.56);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,7.9,1.36);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.9,0.46);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.9,2.46);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// i
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,-1.14);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

//lawllah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.9,4.06);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.3,6.06);
glScalef(0.1,2.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.9,8.06);
glScalef(0.1,2.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,7.9,6.06);
glScalef(0.1,0.1,1.4);
glutSolidCube(2.8);
glPopMatrix();


// - ha
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,15.8,8.96);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// - ha
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,14,8.96);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,14.8,9.86);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

//muhammaddara

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,5.3,5.96);
glScalef(0.1,1.2,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,6.1,3.96);
glScalef(0.1,0.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,7,5.06);
glScalef(0.1,0.1,0.75);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,5.3,5.06);
glScalef(0.1,0.1,0.75);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,3.6,5.16);
glScalef(0.1,0.1,0.75);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,2.2,4.26);
glScalef(0.1,1.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,3.9,7.16);
glScalef(0.1,2.2,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,5.3,8.16);
glScalef(0.1,0.1,0.6);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,3.3,8.16);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,6,9.16);
glScalef(0.1,0.6,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,2.1,9.06);
glScalef(0.1,1,0.1);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,0.5,6.62);
glScalef(0.1,0.3,1.8);
glutSolidCube(2.8);
glPopMatrix();

//rosulullah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,10.96);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,9.9,12.96);
glScalef(0.1,4.3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,9.9,14.46);
glScalef(0.1,4.3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,13.3,16.76);
glScalef(0.1,1.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,14.1,19.06);
glScalef(0.1,1.3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.1,18);
glScalef(0.1,0.1,0.7);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,4,15.6);
glScalef(0.1,0.1,3.2);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,5,20.06);
glScalef(0.1,0.8,0.1);
glutSolidCube(2.8);
glPopMatrix();

// | wau
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,3.5,17.86);
glScalef(0.1,1.9,0.1);
glutSolidCube(2.8);
glPopMatrix();

// -
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,6,18.96);
glScalef(0.1,0.1,0.9);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,0.5,15.6);
glScalef(0.1,0.3,3.5);
glutSolidCube(2.8);
glPopMatrix();

// lawlah
// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,21.6);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();

// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,23.6);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,8,25.6);
glScalef(0.1,5.7,0.1);
glutSolidCube(2.8);
glPopMatrix();


// |
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,11.7,27.6);
glScalef(0.1,3,0.1);
glutSolidCube(2.8);
glPopMatrix();

// - ha atas
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,15.8,26.6);
glScalef(0.1,0.1,0.8);
glutSolidCube(2.8);
glPopMatrix();

// - ha bawah
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,7.4,26.6);
glScalef(0.1,0.1,0.8);
glutSolidCube(2.8);
glPopMatrix();

// - tebel
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(28,0.5,23.6);
glScalef(0.1,0.3,1.5);
glutSolidCube(2.8);
glPopMatrix();


//SELESAI
}

//membuat menara masjid
void menara()
{
 glPushMatrix();
 glColor3f(0.7,0.7,0.7);
 glTranslatef(-38,14,25);
 glScalef(0.5,2.5,0.5);
 glutSolidCube(15);//besarnya ukuran menara
 glPopMatrix();

 glPushMatrix();
 glColor3f(0.7,0.7,0.7);
 glTranslatef(-38,39,25);
 glScalef(0.5,0.2,0.5);
 glutSolidCube(15);//besarnya ukuran menara
 glPopMatrix();

 glPushMatrix();
 glColor3f(0.7,0.7,0.7);
 glTranslatef(-35.5,34,22);
 glScalef(0.2,1.0,0.2);
 glutSolidCube(8);//besarnya ukuran menara
 glPopMatrix();

 glPushMatrix();
 glColor3f(0.7,0.7,0.7);
 glTranslatef(-40.5,34,22);
 glScalef(0.2,1.0,0.2);
 glutSolidCube(8);//besarnya ukuran menara
 glPopMatrix();

 glPushMatrix();
 glColor3f(0.7,0.7,0.7);
 glTranslatef(-35.5,34,27.8);
 glScalef(0.2,1.0,0.2);
 glutSolidCube(8);//besarnya ukuran menara
 glPopMatrix();

 glPushMatrix();
 glColor3f(0.7,0.7,0.7);
 glTranslatef(-40.5,34,27.8);
 glScalef(0.2,1.0,0.2);
 glutSolidCube(8);//besarnya ukuran menara
 glPopMatrix();

 }

void detail_menara()
{
// detail depan
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,30,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,29,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,28,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,27,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,26,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,25,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,24,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,23,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,22,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,21,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,20,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
/*
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,19,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,18,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
*/
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,17,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,16,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,15,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,14,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
/*
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,13,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,12,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

*/
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,11,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,10,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,9,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,8,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,7,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,6,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,5,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,4,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();


glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,3,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,2,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,1,29);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

//detail belakang

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,30,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,29,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,28,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,27,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,26,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,25,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,24,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,23,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,22,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,21,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,20,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
/*
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,19,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,18,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
*/
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,17,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,16,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,15,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,14,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
/*
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,13,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,12,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

*/
glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,11,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,10,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,9,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,8,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,7,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,6,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,5,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,4,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();


glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,3,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,2,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(-38,1,21);
glScalef(1.7,0.1,0.1);
glutSolidCube(2.8);
glPopMatrix();
}


void parkiran(){
//parkiran
glPushMatrix();
glColor3f(1,1,1);
glTranslatef(49,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(55,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(1,1,1);
glTranslatef(61,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(67,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(1,1,1);
glTranslatef(73,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(0,0,0);
glTranslatef(79,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();

glPushMatrix();
glColor3f(1,1,1);
glTranslatef(85,0.1,-22);
glScalef(0.3,0.05,0.1);
glutSolidCube(20);
glPopMatrix();


//alas parkiran

glPushMatrix();
glColor3f(0.7,0.7,0.7);
glTranslatef(66,0.1,10);
glScalef(2,0.01,3);
glutSolidCube(20);
glPopMatrix();
}

void pohon(){
//batang
GLUquadricObj *pObj;
pObj =gluNewQuadric();
gluQuadricNormals(pObj, GLU_SMOOTH);

glPushMatrix();
glColor3ub(104,70,14);
glRotatef(270,1,0,0);
gluCylinder(pObj, 4, 0.7, 30, 25, 25);
glPopMatrix();
}
void rumput(){
//titik 38.9
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,-0.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,2.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,7.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,7.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,11.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,16.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(38.9,0,19.8);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();


//titik 34.4

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,-6.3);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,-1.8);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,2.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,7.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,11.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,16.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,20.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(34.4,0,25.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

// titik 29.9

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,-10.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,-6.3);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,-1.8);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,2.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,7.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,11.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,16.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,20.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,25.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(29.9,0,29.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik 25.7
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(25.7,0,29.7);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(25.7,0,34.2);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik 21

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(21,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(21,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(21,0,38.5);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik 16.2
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(16.2,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(16.2,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(16.2,0,38.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik 11.4
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(11.4,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(11.4,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(11.4,0,38.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik 6.6
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(6.6,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(6.6,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(6.6,0,38.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik 1.8
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(1.8,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(1.8,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(1.8,0,38.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik -3
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-3,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-3,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-3,0,38.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik -7.8

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-7.8,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-7.8,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-7.8,0,38.5);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik -12.6
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,-10.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,-6.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,-1.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,2.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,7.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,11.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,16.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,20.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,25.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,29.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-12.6,0,34.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

//titik -17.4

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,-10.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,-6.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,-1.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,2.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,7.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,11.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,16.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,20.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,25.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-17.4,0,29.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();


// titik -22.2
glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,-8.4);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,-3.9);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,0.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();


glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,5.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,9.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,14.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,18.6);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();

glPushMatrix();
glColor3f(0.6, 1.0, 0.0);
glTranslatef(-22.2,0,23.1);
glScalef(0.5,0.1,0.5);
glutSolidCube(2.8);
glPopMatrix();
}

//ranting
void ranting(){
GLUquadricObj *pObj;
pObj =gluNewQuadric();
gluQuadricNormals(pObj, GLU_SMOOTH);
glPushMatrix();
glColor3ub(104,70,14);
glTranslatef(0,27,0);
glRotatef(330,1,0,0);
gluCylinder(pObj, 0.6, 0.1, 15, 25, 25);
glPopMatrix();

//daun
glPushMatrix();
glColor3ub(18,118,13);
glScaled(5, 5, 5);
glTranslatef(0,7,3);
glutSolidDodecahedron();
glPopMatrix();
}


void awan(){
glPushMatrix();
glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
glColor3ub(153, 223, 255);
glutSolidSphere(10, 50, 50);
glPopMatrix();
glPushMatrix();
glTranslatef(10,0,1);
glutSolidSphere(5, 50, 50);
glPopMatrix();
glPushMatrix();
glTranslatef(-2,6,-2);
glutSolidSphere(7, 50, 50);
glPopMatrix();
glPushMatrix();
glTranslatef(-10,-3,0);
glutSolidSphere(7, 50, 50);
glPopMatrix();
glPushMatrix();
glTranslatef(6,-2,2);
glutSolidSphere(7, 50, 50);
glPopMatrix();
}

void mobil{
//mobil
glColor3f(0,0,1);
glPushMatrix();
glTranslatef(52,3,-10);
glScalef(1.0,1.0,2.0);
glutSolidCube(6.0f);
glPopMatrix();

//cup depan
glColor3f(0,0,1);
glPushMatrix();
glTranslatef(52,1.5,-15);
glScalef(1.0,0.75,1);
glutSolidCube(6.0f);
glPopMatrix();

//kaca
glColor3f(0,1,1);
glPushMatrix();
glTranslatef(52,4,-5.3);
glScalef(0.75,0.5,0.5);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(0,1,1);
glPushMatrix();
glTranslatef(52,5,-16);
glScalef(0.75,0.3,0.1);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(0,1,1);
glPushMatrix();
glTranslatef(49.75,4,-7);
glScalef(0.3,0.5,0.5);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(0,1,1);
glPushMatrix();
glTranslatef(49.75,4,-12);
glScalef(0.3,0.5,0.5);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(0,1,1);
glPushMatrix();
glTranslatef(54.3,4,-12);
glScalef(0.3,0.5,0.5);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(0,1,1);
glPushMatrix();
glTranslatef(54.3,4,-7);
glScalef(0.3,0.5,0.5);
glutSolidCube(6.0f);
glPopMatrix();

//lampu
glColor3f(1,0,0);
glPushMatrix();
glTranslatef(50,1,-4.2);
glScalef(0.1,0.2,0.1);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(1,0,0);
glPushMatrix();
glTranslatef(54,1,-4.2);
glScalef(0.1,0.2,0.1);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(1,0,0);
glPushMatrix();
glTranslatef(50,1,-18);
glScalef(0.1,0.2,0.1);
glutSolidCube(6.0f);
glPopMatrix();

glColor3f(1,0,0);
glPushMatrix();
glTranslatef(54,1,-18);
glScalef(0.1,0.2,0.1);
glutSolidCube(6.0f);
glPopMatrix();
}
//akhir objek

//train 2D
//class untuk terain 2D
class Terrain {
private:
        int w; //Width
        int l; //Length
        float** hs; //Heights
        Vec3f** normals;
        bool computedNormals; //Whether normals is up-to-date
public:
        Terrain(int w2, int l2) {
                w = w2;
                l = l2;

                hs = new float*[l];
                for (int i = 0; i < l; i++) {
                        hs[i] = new float[w];
                }

                normals = new Vec3f*[l];
                for (int i = 0; i < l; i++) {
                        normals[i] = new Vec3f[w];
                }

                computedNormals = false;
        }

        ~Terrain() {
                for (int i = 0; i < l; i++) {
                        delete[] hs[i];
                }
                delete[] hs;

                for (int i = 0; i < l; i++) {
                        delete[] normals[i];
                }
                delete[] normals;
        }

        int width() {
                return w;
        }

        int length() {
                return l;
        }

        //Sets the height at (x, z) to y
        void setHeight(int x, int z, float y) {
                hs[z][x] = y;
                computedNormals = false;
        }

        //Returns the height at (x, z)
        float getHeight(int x, int z) {
                return hs[z][x];
        }

        //Computes the normals, if they haven't been computed yet
        void computeNormals() {
                if (computedNormals) {
                        return;
                }

                //Compute the rough version of the normals
                Vec3f** normals2 = new Vec3f*[l];
                for (int i = 0; i < l; i++) {
                        normals2[i] = new Vec3f[w];
                }

                for (int z = 0; z < l; z++) {
                        for (int x = 0; x < w; x++) {
                                Vec3f sum(0.0f, 0.0f, 0.0f);

                                Vec3f out;
                                if (z > 0) {
                                        out = Vec3f(0.0f, hs[z - 1][x] - hs[z][x], -1.0f);
                                }
                                Vec3f in;
                                if (z < l - 1) {
                                        in = Vec3f(0.0f, hs[z + 1][x] - hs[z][x], 1.0f);
                                }
                                Vec3f left;
                                if (x > 0) {
                                        left = Vec3f(-1.0f, hs[z][x - 1] - hs[z][x], 0.0f);
                                }
                                Vec3f right;
                                if (x < w - 1) {
                                        right = Vec3f(1.0f, hs[z][x + 1] - hs[z][x], 0.0f);
                                }

                                if (x > 0 && z > 0) {
                                        sum += out.cross(left).normalize();
                                }
                                if (x > 0 && z < l - 1) {
                                        sum += left.cross(in).normalize();
                                }
                                if (x < w - 1 && z < l - 1) {
                                        sum += in.cross(right).normalize();
                                }
                                if (x < w - 1 && z > 0) {
                                        sum += right.cross(out).normalize();
                                }

                                normals2[z][x] = sum;
                        }
                }

                //Smooth out the normals
                const float FALLOUT_RATIO = 0.5f;
                for (int z = 0; z < l; z++) {
                        for (int x = 0; x < w; x++) {
                                Vec3f sum = normals2[z][x];

                                if (x > 0) {
                                        sum += normals2[z][x - 1] * FALLOUT_RATIO;
                                }
                                if (x < w - 1) {
                                        sum += normals2[z][x + 1] * FALLOUT_RATIO;
                                }
                                if (z > 0) {
                                        sum += normals2[z - 1][x] * FALLOUT_RATIO;
                                }
                                if (z < l - 1) {
                                        sum += normals2[z + 1][x] * FALLOUT_RATIO;
                                }

                                if (sum.magnitude() == 0) {
                                        sum = Vec3f(0.0f, 1.0f, 0.0f);
                                }
                                normals[z][x] = sum;
                        }
                }

                for (int i = 0; i < l; i++) {
                        delete[] normals2[i];
                }
                delete[] normals2;

                computedNormals = true;
        }

        //Returns the normal at (x, z)
        Vec3f getNormal(int x, int z) {
                if (!computedNormals) {
                        computeNormals();
                }
                return normals[z][x];
        }
};
//end class


void initRendering() {
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_COLOR_MATERIAL);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glEnable(GL_NORMALIZE);
        glShadeModel(GL_SMOOTH);
}

//Loads a terrain from a heightmap.  The heights of the terrain range from
//-height / 2 to height / 2.
//load terain di procedure inisialisasi
Terrain* loadTerrain(const char* filename, float height) {
        Image* image = loadBMP(filename);
        Terrain* t = new Terrain(image->width, image->height);
        for (int y = 0; y < image->height; y++) {
                for (int x = 0; x < image->width; x++) {
                        unsigned char color = (unsigned char) image->pixels[3 * (y
                                        * image->width + x)];
                        float h = height * ((color / 255.0f) - 0.5f);
                        t->setHeight(x, y, h);
                }
        }

        delete image;
        t->computeNormals();
        return t;
}

float _angle = 60.0f;
//buat tipe data terain
Terrain* _terrain;
Terrain* _terrainRumput;



const GLfloat light_ambient[] = { 0.3f, 0.3f, 0.3f, 1.0f };
const GLfloat light_diffuse[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat light_ambient2[] = { 0.3f, 0.3f, 0.3f, 0.0f };
const GLfloat light_diffuse2[] = { 0.3f, 0.3f, 0.3f, 0.0f };

const GLfloat mat_ambient[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

void cleanup() { //untuk menghilangkan file image
        delete _terrain;
        delete _terrainRumput;
        }

//untuk di display
void drawSceneTanah(Terrain *terrain, GLfloat r, GLfloat g, GLfloat b) {
        float scale = 180.0f / max(terrain->width() - 1, terrain->length() - 1);
        glScalef(scale, scale, scale);
        glTranslatef(-(float) (terrain->width() - 1) / 2, 0.0f,
                        -(float) (terrain->length() - 1) / 2);

        glColor3f(r, g, b);
        for (int z = 0; z < terrain->length() - 1; z++) {
                //Makes OpenGL draw a triangle at every three consecutive vertices
                glBegin(GL_TRIANGLE_STRIP);
                for (int x = 0; x < terrain->width(); x++) {
                        Vec3f normal = terrain->getNormal(x, z);
                        glNormal3f(normal[0], normal[1], normal[2]);
                        glVertex3f(x, terrain->getHeight(x, z), z);
                        normal = terrain->getNormal(x, z + 1);
                        glNormal3f(normal[0], normal[1], normal[2]);
                        glVertex3f(x, terrain->getHeight(x, z + 1), z + 1);
                }
                glEnd();
        }

}

unsigned int LoadTextureFromBmpFile(char *filename);

void display(void) {
        glClearStencil(0); //clear the stencil buffer
        glClearDepth(1.0f);
        glClearColor(0.0, 0.6, 0.8, 1);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT |
        GL_STENCIL_BUFFER_BIT); //clear the buffers
        glLoadIdentity();
        gluLookAt(viewx, viewy, viewz, 0.0, 0.0, 5.0, 0.0, 1.0, 0.0);

        glPushMatrix();


        drawSceneTanah(_terrain, 0.7f, 0.7f, 0.7f );
        glPopMatrix();

        glPushMatrix();
        drawSceneTanah(_terrainRumput,0.3f, 0.9f, 0.0f); //0.7f, 0.2f, 0.1f
        glPopMatrix();

        //lokasi pohon utama
        glPushMatrix();
        glTranslatef(-25,0.5,29);
        glScalef(0.4, 0.4, 0.4);
        glRotatef(120,0,1,0);
        pohon();

        //ranting1
        ranting();

        //ranting2
        glPushMatrix();
        glScalef(1, 1, 1);
        glTranslatef(0,28,25);
        glRotatef(250,1,0,0);
        ranting();
        glPopMatrix();

        //daun besar
        glPushMatrix();
        glScalef(1.8, 1.8, 1.8);
        glTranslatef(0,-6,21.5);
        glRotatef(-55,1,0,0);
        ranting();
        glPopMatrix();

        glPopMatrix();
        glPopMatrix();
        glPopMatrix();

        //lokasi pohon2
        glPushMatrix();
        glTranslatef(45,0.5,-38);
        glScalef(0.4, 0.4, 0.4);
        glRotatef(60,0,1,0);
        pohon();

        //ranting1
        ranting();

        //ranting2
        glPushMatrix();
        glScalef(1, 1, 1);
        glTranslatef(0,28,25);
        glRotatef(250,1,0,0);
        ranting();
        glPopMatrix();

        //daun besar
        glPushMatrix();
        glScalef(1.8, 1.8, 1.8);
        glTranslatef(0,-6,21.5);
        glRotatef(-55,1,0,0);
        ranting();
        glPopMatrix();

        glPopMatrix();
        glPopMatrix();
        glPopMatrix();


        //awan
        glPushMatrix();
        glTranslatef(-75, 110, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-45, 110, -115);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-50, 120, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-140, 90, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-155, 90, -115);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-130, 110, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-190, 110, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-175, 120, -115);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-200, 100, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-30, 110, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-35, 95, -115);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-20, 90, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-80, 90, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(220, 90, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(180, 90, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(190, 110, -120);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(125, 110, -115);
        glScalef(1.8, 1.0, 1.0);
        awan();
        glPopMatrix();


        //menampilkan objek2
        menara();
        detail_menara();
        masjid();
        rumput();
        parkiran();
        mobil();

        glutSwapBuffers();
        glFlush();
        rot++;
        angle++;


}

void init(void) {
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glDepthFunc(GL_LESS);
        glEnable(GL_NORMALIZE);
        glEnable(GL_COLOR_MATERIAL);
        glDepthFunc(GL_LEQUAL);
        glShadeModel(GL_SMOOTH);
        glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
        glEnable(GL_CULL_FACE);

        _terrain = loadTerrain("terain.bmp", 20);
        _terrainRumput = loadTerrain("terainrumput.bmp", 20);

        //binding texture

}

static void kibor(int key, int x, int y) {
        switch (key) {
        case GLUT_KEY_HOME:
                viewy++;
                break;
        case GLUT_KEY_END:
                viewy--;
                break;
        case GLUT_KEY_UP:
                viewz--;
                break;
        case GLUT_KEY_DOWN:
                viewz++;
                break;

        case GLUT_KEY_RIGHT:
                viewx++;
                break;
        case GLUT_KEY_LEFT:
                viewx--;
                break;

        case GLUT_KEY_F1: {
                glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
                glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
                glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
                glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
        }
                ;
                break;
        case GLUT_KEY_F2: {
                glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
                glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse2);
                glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
                glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
        }
                ;
                break;
        default:
                break;
        }
}

void keyboard(unsigned char key, int x, int y) {
        if (key == 'd') {

                spin = spin - 1;
                if (spin > 360.0)
                        spin = spin - 360.0;
        }
        if (key == 'a') {
                spin = spin + 1;
                if (spin > 360.0)
                        spin = spin - 360.0;
        }
        if (key == 'q') {
                viewz++;
        }
        if (key == 'e') {
                viewz--;
        }
        if (key == 's') {
                viewy--;
        }
        if (key == 'w') {
                viewy++;
        }
}

void reshape(int w, int h) {
        glViewport(0, 0, (GLsizei) w, (GLsizei) h);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluPerspective(60, (GLfloat) w / (GLfloat) h, 0.1, 1000.0);
        glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv) {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_STENCIL |
GLUT_DEPTH); //add a stencil buffer to the window
        glutInitWindowSize(800, 600);
        glutInitWindowPosition(100, 100);
        glutCreateWindow("Masjid Al-Irsyad Kotabaru Parahyangan");
        init();

        glutDisplayFunc(display);
        glutIdleFunc(display);
        glutReshapeFunc(reshape);
        glutSpecialFunc(kibor);

        glutKeyboardFunc(keyboard);

        glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
        glLightfv(GL_LIGHT0, GL_POSITION, light_position);

        glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
        glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
        glColorMaterial(GL_FRONT, GL_DIFFUSE);

        glutMainLoop();
        return 0;
}
