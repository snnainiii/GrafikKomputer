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
	gluOrtho2D(0.0, 10.0, -5.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    //glColor3f (1.0, 1.0, 0.0);
    glLineWidth(7.0);

    glBegin(GL_LINES);
        glColor3f (255.0, 0.0, 0.0); glVertex2f(1.0,5.0);
        glColor3f (255.0, 128.0, 0.0); glVertex2f(1.0,1.0);
        glColor3f (255.0, 255.0, 0.0); glVertex2f(1.0,1.0);
        glColor3f (0.0, 255.0, 64.0); glVertex2f(3.0,1.0);
        glColor3f (0.0, 255.0, 255.0); glVertex2f(3.0,1.0);
        glColor3f (0.0, 0.0, 255.0); glVertex2f(3.0,5.0);
        glColor3f (128.0, 0.0, 255.0); glVertex2f(3.0,5.0);
        glColor3f (255.0, 0.0, 0.0); glVertex2f(1.0,5.0);

    glEnd();

    glBegin(GL_LINES);
        glColor3f (255.0, 0.0, 0.0); glVertex2f(6.0,5.0);
        glColor3f (255.0, 128.0, 0.0); glVertex2f(4.0,5.0);
        glColor3f (191.0, 255.0, 0.0); glVertex2f(4.0,5.0);
        glColor3f (255.0, 128.0, 0.0); glVertex2f(4.0,3.0);
        glColor3f (255.0, 255.0, 0.0); glVertex2f(4.0,3.0);
        glColor3f (0.0, 255.0, 0.0); glVertex2f(6.0,3.0);
        glColor3f (0.0, 255.0, 255.0); glVertex2f(6.0,3.0);
        glColor3f (0.0, 0.0, 255.0); glVertex2f(6.0,1.0);
        glColor3f (128.0, 0.0, 255.0); glVertex2f(6.0,1.0);
        glColor3f (255.0, 0.0, 0.0); glVertex2f(4.0,1.0);

    glEnd();

    glBegin(GL_LINES);
        glColor3f (255.0, 0.0, 0.0); glVertex2f(7.0,5.0);
        glColor3f (255.0, 128.0, 0.0); glVertex2f(7.0,3.0);
        glColor3f (255.0, 255.0, 0.0); glVertex2f(7.0,3.0);
        glColor3f (0.0, 255.0, 64.0); glVertex2f(9.0,3.0);
        glColor3f (0.0, 255.0, 255.0); glVertex2f(9.0,3.0);
        glColor3f (0.0, 0.0, 255.0); glVertex2f(9.0,5.0);
        glColor3f (128.0, 0.0, 255.0); glVertex2f(9.0,5.0);
        glColor3f (255.0, 0.0, 0.0); glVertex2f(9.0,1.0);
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
    glutInitWindowSize(400,400);
    // mengatur posisi windows
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    // membuat window
    glutCreateWindow("210411100054 SITI NUR AINI");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
