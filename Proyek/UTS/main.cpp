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
	//memilih warna yang digunakan untuk membersihkan latar dalam mode RGBA
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// luasan bidang gambar 2d
	gluOrtho2D(-1.0, 50.0, -2.0, 28.0); // x negatif, x positif, y negetif, y positif
	glMatrixMode(GL_MODELVIEW);
}

// fungsi lingkaran
void lingkaran()
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(float x =0.0; x<=6.28; x+=0.01){
        glVertex2f(cos(x),sin(x));
    }
    glEnd();
}

// fungsi kotak
void kotak(float r, float g, float b)
{
    // kotak
   glBegin(GL_POLYGON);
      glColor3f(r, g, b);
        glVertex3f(2.0, 2.0, 0.0);
        glVertex3f(3.0, 3.0, 0.0);
        glVertex3f(7.0, 3.0, 0.0);
        glVertex3f(8.0, 2.0, 0.0);
        glVertex3f(7.0, 1.0, 0.0);
        glVertex3f(3.0, 1.0, 0.0);

    glEnd();

    // untuk lingkaran
    glPushMatrix(); // menambah ke tumpukan
        glScaled(0.2, 0.2, 1.0);
        glTranslatef(14.0, 10.0, 0.0);
        lingkaran();

        glTranslatef(21.8, 0.0, 0.0);
        lingkaran();
    glPopMatrix(); // menghapus dari tumpukan

    // jika tidak menggunakan glPushMatrix dan glPopMatrix nanti seluruh code di bawah akan ikut berukuran kecil karena lingkarannya diuabah ukurannya menggunakan scaling

    // untuk garis tepi kotak
    glBegin(GL_LINES);
        glLineWidth(8.0);

        // warna putih x-
        // warna pink x+
        // warna toska y+
        // warna biru y-

        glColor3f(1.0, 1.0, 1.0); glVertex3f(2.0, 2.0, 0.0); // A
        glColor3f(1.0, 1.0, 1.0); glVertex3f(3.0, 3.0, 0.0); // B
        glColor3f(0.0, 1.0, 1.0); glVertex3f(3.0, 3.0, 0.0); // B
        glColor3f(0.0, 1.0, 1.0); glVertex3f(7.0, 3.0, 0.0); // C
        glColor3f(1.0, 0.0, 1.0); glVertex3f(7.0, 3.0, 0.0); // C
        glColor3f(1.0, 0.0, 1.0); glVertex3f(8.0, 2.0, 0.0); // D
        glColor3f(1.0, 0.0, 1.0); glVertex3f(8.0, 2.0, 0.0); // D
        glColor3f(1.0, 0.0, 1.0); glVertex3f(7.0, 1.0, 0.0); // E
        glColor3f(0.0, 0.0, 1.0); glVertex3f(7.0, 1.0, 0.0); // E
        glColor3f(0.0, 0.0, 1.0); glVertex3f(3.0, 1.0, 0.0); // F
        glColor3f(1.0, 1.0, 1.0); glVertex3f(3.0, 1.0, 0.0); // F
        glColor3f(1.0, 1.0, 1.0); glVertex3f(2.0, 2.0, 0.0); // A
    glEnd();

}

void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);

// angka 0 start
    // BAGIAN A
    kotak(1.0, 0.2, 0.0);

    // BAGIAN B
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN C
    glRotatef(90, 0, 0, 1); // bertempat dibagian A
    glTranslatef(0, -10, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN D
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN E
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN F
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN G
    glRotatef(90, 0, 0, 1); // berada dibagian E
    glTranslatef(0, -10, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN H
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN I
    glRotatef(90, 0, 0, 1); // bertempat dibagian G
    glTranslatef(0, -10, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN J
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN K
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);

    // BAGIAN L
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.2, 0.0);
// angka 0 end


// angka 5 start
    // BAGIAN M
    glRotatef(90, 0, 0, 1); // bertempat dibagian K
    glTranslatef(16, -10, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN N
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN O
    glRotatef(90, 0, 0, 1); // bertempat dibagian M
    glTranslatef(0, -10, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN P
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN Q
    glRotatef(90, 0, 0, 1); // bertempat dibagian O
    glTranslatef(0, -10, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN R
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN S
    glRotatef(90, 0, 0, 1); // bertempat dibagian P
    glTranslatef(-6, -10, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN T
    glTranslatef(-6, 0, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN U
    glRotatef(90, 0, 0, 1);
    glTranslatef(0, -4, 0);
    kotak(1.0, 0.6, 0.0);

    // BAGIAN V
    glTranslatef(6, 0, 0);
    kotak(1.0, 0.6, 0.0);
// angka 5 end


// angka 4 start
    // BAGIAN D1
    glRotatef(90, 0, 0, 1); // bertempat dibagian U
    glTranslatef(-6, -14, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN C1
    glTranslatef(-6, 0, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN B1
    glRotatef(90, 0, 0, 1); // bertempat dibagian P
    glTranslatef(-6, -4, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN A1
    glTranslatef(-6, 0, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN Y
    glRotatef(90, 0, 0, 1);
    glTranslatef(-6, -4, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN Z
    glTranslatef(-6, 0, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN X
    glTranslatef(12, 0, 0);
    kotak(0.0, 0.7, 0.0);

    // BAGIAN W
    glTranslatef(6, 0, 0);
    kotak(0.0, 0.7, 0.0);
// angka 4 end


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


int main(int argc, char *argv[])
{
    a=4;
	b=5;
	c=0.3;
	d=1;
	glutInit( & argc, argv );
	// ukuran window
    glutInitWindowSize(1000,600);
    // mengatur posisi windows
    glutInitWindowPosition(500,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    // membuat window
    glutCreateWindow("210411100054 SITI NUR AINI UTS");
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
