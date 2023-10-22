/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
//Supaya bisa menggunakan fungsi sin(), program perlu include Math.h
#include <math.h>

int a,b,d;
float c;

void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// luasan bidang gambar 2d
	gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    //glColor3f (1.0, 1.0, 0.0);
    glLineWidth(7.0);

    // bidang i
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 2.0, 0.0); // A
    glVertex3f(-0.5, 0.3, 0.0); // B
    glVertex3f(-2.0, 0.0, 0.0); // C
    glVertex3f(-0.5, -0.5, 0.0); // D
    glVertex3f(0.0, -2.0, 0.0); // E
    glVertex3f(0.5, -0.5, 0.0); // F
    glVertex3f(2.0, 0.0, 0.0); // G
    glVertex3f(0.5, 0.5, 0.0); // H

    glEnd();

    // bidang a
    glColor3f (1.0, 0.2, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 9.0, 0.0); // J
        glVertex3f(0.0, 2.0, 0.0); // A
        glVertex3f(0.5, 0.5, 0.0); // H
        glVertex3f(5.0, 5.0, 0.0); // L
    glEnd();

    // bidang b
    glColor3f (0.7, 0.0, 0.1);
    glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.5, 0.0); // H
        glVertex3f(5.0, 5.0, 0.0); // L
        glVertex3f(5.0, 0.0, 0.0); // K
        glVertex3f(2.0, 0.0, 0.0); // G

    glEnd();

    // bidang c
    glColor3f (0.0, 0.3, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(2.0, 0.0, 0.0); // G
        glVertex3f(9.0, 0.0, 0.0); // M
        glVertex3f(5.0, -5.0, 0.0); // P
        glVertex3f(0.5, -0.5, 0.0); // F
    glEnd();

    // bidang d
    glColor3f (0.0, 0.0, 0.7);
    glBegin(GL_POLYGON);
        glVertex3f(0.5, -0.5, 0.0); // F
        glVertex3f(5.0, -5.0, 0.0); // P
        glVertex3f(0.0, -5.0, 0.0); // N
        glVertex3f(0.0, -2.0, 0.0); // E


    glEnd();

    // bidang e
    glColor3f(0.4f, 0.9f, 0.1f);

    glBegin(GL_POLYGON);
        glVertex3f(0.0, -2.0, 0.0); // E
        glVertex3f(0.0, -9.0, 0.0); // O
        glVertex3f(-5.0, -5.0, 0.0); // S
        glVertex3f(-0.5, -0.5, 0.0); // D
    glEnd();

    // bidang f
    glColor3f(0.0f, 0.7f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex3f(-0.5, -0.5, 0.0); // D
        glVertex3f(-5.0, -5.0, 0.0); // S
        glVertex3f(-5.0, 0.0, 0.0); // Q
        glVertex3f(-2.0, 0.0, 0.0); // C
    glEnd();

    // bidang g
    glColor3f (1.0, 0.8, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(-2.0, 0.0, 0.0); // C
        glVertex3f(-9.0, 0.0, 0.0); // R
        glVertex3f(-5.0, 5.0, 0.0); // T
        glVertex3f(-0.5, 0.5, 0.0); // B
    glEnd();

    // bidang h
    glColor3f (1.0, 0.6, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.5, 0.0); // B
        glVertex3f(-5.0, 5.0, 0.0); // T
        glVertex3f(0.0, 5.0, 0.0); // I
        glVertex3f(0.0, 2.0, 0.0); // A

    glEnd();

    glFlush ();
}

 void kunci(unsigned char key, int x, int y)
{
   switch (key)
   {
     /* aplikasi berhenti ketika tombol q ditekan */
     case 27 :
     case 'q':
      exit(0);
      break;
     }
    glutPostRedisplay();
}

// yang dieksekusi pertama
int main(int argc, char *argv[])
{
    a=4;
	b=5;
	c=0.3;
	d=1;
	glutInit( & argc, argv );
	// ukuran window
    glutInitWindowSize(600,600);
    // mengatur posisi windows
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    // membuat window
    glutCreateWindow("210411100054_SITI NUR AINI_Logo Google Photos");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
