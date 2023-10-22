
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
//Supaya bisa menggunakan fungsi sin(), program perlu include Math.h
#include <math.h>

#include <iostream>
using namespace std;

float posX = 0.0;
float posY = 0.0;

int a,b,d;
float c;

void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// luasan bidang gambar 2d
	gluOrtho2D(-5.0, 15.0, -5.0, 10.0); // x negatif, x positif, y negetif, y positif
	glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    //glColor3f (1.0, 1.0, 0.0);
    glLineWidth(7.0);

    glBegin(GL_LINES);
        glColor3f (255.0, 0.0, 0.0);
            glVertex2f(1.0 + posX, 5.0 + posY);
        glColor3f (255.0, 128.0, 0.0);
            glVertex2f(1.0 + posX, 1.0 + posY);
        glColor3f (255.0, 255.0, 0.0);
            glVertex2f(1.0 + posX, 1.0 + posY);
        glColor3f (0.0, 255.0, 64.0);
            glVertex2f(3.0 + posX, 1.0 + posY);
        glColor3f (0.0, 255.0, 255.0);
            glVertex2f(3.0 + posX, 1.0 + posY);
        glColor3f (0.0, 0.0, 255.0);
            glVertex2f(3.0 + posX, 5.0 + posY);
        glColor3f (128.0, 0.0, 255.0);
            glVertex2f(3.0 + posX, 5.0 + posY);
        glColor3f (255.0, 0.0, 0.0);
            glVertex2f(1.0 + posX, 5.0 + posY);

    glEnd();

    glBegin(GL_LINES);
        glColor3f (255.0, 0.0, 0.0);
            glVertex2f(6.0 + posX, 5.0 + posY);
        glColor3f (255.0, 128.0, 0.0);
            glVertex2f(4.0 + posX, 5.0 + posY);
        glColor3f (191.0, 255.0, 0.0);
            glVertex2f(4.0 + posX, 5.0 + posY);
        glColor3f (255.0, 128.0, 0.0);
            glVertex2f(4.0 + posX, 3.0 + posY);
        glColor3f (255.0, 255.0, 0.0);
            glVertex2f(4.0 + posX, 3.0 + posY);
        glColor3f (0.0, 255.0, 0.0);
            glVertex2f(6.0 + posX, 3.0 + posY);
        glColor3f (0.0, 255.0, 255.0);
            glVertex2f(6.0 + posX, 3.0 + posY);
        glColor3f (0.0, 0.0, 255.0);
            glVertex2f(6.0 + posX, 1.0 + posY);
        glColor3f (128.0, 0.0, 255.0);
            glVertex2f(6.0 + posX, 1.0 + posY);
        glColor3f (255.0, 0.0, 0.0);
            glVertex2f(4.0 + posX, 1.0 + posY);

    glEnd();

    glBegin(GL_LINES);
        glColor3f (255.0, 0.0, 0.0);
            glVertex2f(7.0 + posX, 5.0 + posY);
        glColor3f (255.0, 128.0, 0.0);
            glVertex2f(7.0 + posX, 3.0 + posY);
        glColor3f (255.0, 255.0, 0.0);
            glVertex2f(7.0 + posX, 3.0 + posY);
        glColor3f (0.0, 255.0, 64.0);
            glVertex2f(9.0 + posX, 3.0 + posY);
        glColor3f (0.0, 255.0, 255.0);
            glVertex2f(9.0 + posX, 3.0 + posY);
        glColor3f (0.0, 0.0, 255.0);
            glVertex2f(9.0 + posX, 5.0 + posY);
        glColor3f (128.0, 0.0, 255.0);
            glVertex2f(9.0 + posX, 5.0 + posY);
        glColor3f (255.0, 0.0, 0.0);
            glVertex2f(9.0 + posX, 1.0 + posY);
    glEnd();

    glFlush ();
}

void inputan(unsigned char key, int x, int y)
{
    cout << key;
    if (key == 'r' || key == 'R')
    {
        posX += 0.2;
        cout << posX << endl;
        display();
    }
    if (key == 'l' || key == 'L')
    {
        posX -= 0.2;
        cout << posX << endl;
        display();
    }

    if (key == 'a' || key == 'A')
    {
        posY += 0.2;
        cout << posY << endl;
        display();
    }
    if (key == 'b' || key == 'B')
    {
        posY -= 0.2;
        cout << posY << endl;
        display();
    }
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
    glutInitWindowSize(900,600);
    // mengatur posisi windows
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    // membuat window
    glutCreateWindow("210411100054 SITI NUR AINI MENGGERAKKAN NIM");
    glutDisplayFunc(display);
    glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
