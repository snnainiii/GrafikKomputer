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

// untuk mesin cuci
float posX = 0.0;
float posY = 0.0;

// untuk diamond
float posX1 = 0.0;
float posY1 = 0.0;

// untuk pinguin
float posX2 = 0.0;
float posY2 = 0.0;

// untuk bunga
float posX3 = 0.0;
float posY3 = 0.0;

// scale
float scaleFactor = 1.0f;

int a,b,d;
float c;

// rotasi
float rotationAngle = 0.0f;

void myinit()
{

    glClearColor(0.0, 0.0, 0.0, 1.0); //memilih warna yang digunakan untuk membersihkan latar dalam mode RGBA
	glColor3f(1.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// luasan bidang gambar 2d
	gluOrtho2D(-5.0, 45.0, -1.0, 12.0); // x negatif, x positif, y negetif, y positif
	glMatrixMode(GL_MODELVIEW);
}

void lingkaran(float centerX, float centerY, float radius, float red, float green, float blue)
{
    glColor3f(red, green, blue); // Mengatur warna lingkaran
    glBegin(GL_POLYGON); // Memulai penggambaran poligon
    for (float x = 0.0; x <= 6.28; x += 0.01) // Mengulangi dari 0 hingga 2π (satu putaran penuh)
    {
        glVertex2f(centerX + radius * cos(x), centerY + radius * sin(x)); // Menambahkan titik pada koordinat (x, y) di lingkaran dengan jari-jari radius
    }
    glEnd(); // Mengakhiri penggambaran poligon
}

void mesinCuci()
{
    // MESIN CUCI START
    // bidang A depan
    glColor3f(0.996, 1, 1);
    glBegin(GL_POLYGON);
        // glNormal3f(0.0, 0.0,1.0);
        glVertex3f(1.0 + posX, 2.0 + posY, 1.0); // A1
        glVertex3f(6.0 + posX, 1.0 + posY, 1.0); // J1
        glVertex3f(6.0 + posX, 5.4 + posY, 1.0); // G1
        glVertex3f(0.99 + posX, 6.46 + posY, 1.0); // B1
    glEnd();

    // bidang C depan
    glColor3f(0.71, 1, 0.847);
    glBegin(GL_POLYGON);
        //glNormal3f(0.0,0.0,1.0);
        glVertex3f(6.0 + posX, 5.4 + posY, 1.0); // G1
        glVertex3f(6.02 + posX, 6.47 + posY,1.0); // F1
        glVertex3f(0.98 + posX, 7.42 + posY, 1.0); // C1
        glVertex3f(0.99 + posX, 6.46 + posY, 1.0); // B1
    glEnd();

    // bidang B kanan
    glColor3f(0.788, 0.812, 0.831);
    glBegin(GL_POLYGON);
        glVertex3f(6.0 + posX, 1.0 + posY, -1.0); // J1
        glVertex3f(6.0 + posX, 5.4 + posY, -1.0); // G1
        glVertex3f(9.0 + posX, 7.0 + posY, 1.0); // H1
        glVertex3f(9.04 + posX, 2.45 + posY, 1.0); // I1
    glEnd();

    // bidang D kanan
    glColor3f(0.463, 0.8, 0.604);
    glBegin(GL_POLYGON);
        glVertex3f(6.0 + posX, 5.4 + posY, -1.0); // G1
        glVertex3f(6.02 + posX, 6.47 + posY, -1.0); // F1
        glVertex3f(9.0 + posX, 8.0 + posY, 1.0); // E1
        glVertex3f(9.0 + posX, 7.0 + posY, 1.0); // H1
    glEnd();

    // bidang E
    glColor3f(0.824, 1, 0.961);
    glBegin(GL_POLYGON);
        glVertex3f(9.0 + posX, 8.0 + posY, 0.0); // E1
        glVertex3f(6.02 + posX, 6.47 + posY, 0.0); // F1
        glVertex3f(0.98 + posX, 7.42 + posY, 0.0); // C1
        glVertex3f(4.56 + posX, 8.43 + posY, 0.0); // D1
    glEnd();

    // bidang C persegi panjang
    glColor3f(0.604, 0.718, 0.706);
    glBegin(GL_POLYGON);
        glVertex3f(1.4 + posX, 7.0 + posY, 0.0); // A10
        glVertex3f(1.4 + posX, 6.6 + posY, 0.0); // B10
        glVertex3f(3.2 + posX, 6.2 + posY, 0.0); // D10
        glVertex3f(3.2 + posX, 6.6 + posY, 0.0); // C10
    glEnd();

    lingkaran(3.6 + posX, 6.4 + posY, 0.22, 0.922, 0.522, 0.365);
    lingkaran(4.2 + posX, 6.30 + posY, 0.22, 0.922, 0.522, 0.365);
    lingkaran(3.38 + posX, 3.87 + posY, 1.5, 0.573, 0.616, 0.651);
    lingkaran(3.38 + posX, 3.87 + posY, 1.4, 0.639, 0.976, 0.776);
// MESIN CUCI END

}

void diamond()
{
    // DIAMOND START

    // bidang A
    glColor3f(0.635, 0.863, 0.91);
    glBegin(GL_POLYGON);
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(11.3 + posX1, 6.1 + posY1, 0.0); // Z1
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
    glEnd();

    // bidang B
    glColor3f(0.333, 0.8, 0.894);
    glBegin(GL_POLYGON);
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2
    glEnd();

    // bidang C
    glColor3f (0.643, 0.945, 0.976);
    glBegin(GL_POLYGON);
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
    glEnd();

    // bidang D
    glColor3f(0, 0.733, 0.855);
    glBegin(GL_POLYGON);
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
    glEnd();

    // bidang E
    glColor3f(0, 0.467, 0.631);
    glBegin(GL_POLYGON);
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2
        glVertex3f(19.3 + posX1, 5.35 + posY1, 0.0); // F2
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
    glEnd();

    // bidang F
    glColor3f(0.549, 0.808, 0.902);
    glBegin(GL_POLYGON);
        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2
        glVertex3f(19.3 + posX1, 5.35 + posY1, 0.0); // F2
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
    glEnd();

    // bidang H
    glColor3f(0, 0.325, 0.471);
    glBegin(GL_POLYGON);
        glVertex3f(11.3 + posX1, 6.1 + posY1, 0.0); // Z1
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(12.33 + posX1, 6.32 + posY1, 0.0); // L2
    glEnd();

    // bidang G
    glColor3f(0, 0.831, 0.902);
    glBegin(GL_POLYGON);
        glVertex3f(11.3 + posX1, 6.1 + posY1, 0.0); // Z1
        glVertex3f(12.33 + posX1, 6.32 + posY1, 0.0); // L2
        glVertex3f(12.05 + posX1, 6.91 + posY1, 0.0); // W1
    glEnd();

    // bidang I
    glColor3f(0.459, 0.816, 0.835);
    glBegin(GL_POLYGON);
        glVertex3f(12.05 + posX1, 6.91 + posY1, 0.0); // W1
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(13.36 + posX1, 7.29 + posY1, 0.0); // P2
    glEnd();

    // bidang J
    glColor3f(0.459, 0.816, 0.835);
    glBegin(GL_POLYGON);
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(13.83 + posX1, 6.15 + posY1, 0.0); // M2
        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1
        glVertex3f(13.36 + posX1, 7.29 + posY1, 0.0); // P2

    glEnd();

    // bidang L
    glColor3f(0, 0.659, 0.773);
    glBegin(GL_POLYGON);
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(13.83 + posX1, 6.15 + posY1, 0.0); // M2
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2
    glEnd();

    // bidang K
    glColor3f(0, 0.467, 0.631);
    glBegin(GL_POLYGON);
        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1
        glVertex3f(13.83 + posX1, 6.15 + posY1, 0.0); // M2
        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
    glEnd();

    // bidang M
    glColor3f(0, 0.404, 0.663);
    glBegin(GL_POLYGON);
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2
        glVertex3f(13.83 + posX1, 6.15 + posY1, 0.0); // M2
        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
    glEnd();

    // bidang N
    glColor3f(0.129, 0.725, 0.808);
    glBegin(GL_POLYGON);
        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1
    glEnd();

    // bidang O
    glColor3f(0, 0.467, 0.631);
    glBegin(GL_POLYGON);
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1
        glVertex3f(18.39 + posX1, 5.98 + posY1, 0.0); // G2
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2
    glEnd();

    // bidang Q
    glColor3f(0, 0.659, 0.773);
    glBegin(GL_POLYGON);
        glVertex3f(18.39 + posX1, 5.98 + posY1, 0.0); // G2
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2
        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2
    glEnd();

    // bidang P
    glColor3f(0.549, 0.808, 0.902);
    glBegin(GL_POLYGON);
        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1
        glVertex3f(18.39 + posX1, 5.98 + posY1, 0.0); // G2
        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
    glEnd();

    // bidang R
    glColor3f(0, 0.325, 0.471);
    glBegin(GL_POLYGON);
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2
        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2
    glEnd();

    // bidang T
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2
        glVertex3f(20.07 + posX1, 6.36 + posY1, 0.0); // E2
        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2
    glEnd();

    // bidang S
    glColor3f(0.549, 0.808, 0.902);
    glBegin(GL_POLYGON);
        glVertex3f(20.07 + posX1, 6.36 + posY1, 0.0); // E2
        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2
        glVertex3f(19.37 + posX1, 7.12 + posY1, 0.0); // D2
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
    glEnd();

    // bidang U
    glColor3f(0.004, 0.647, 0.765);
    glBegin(GL_POLYGON);
        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2
        glVertex3f(19.37 + posX1, 7.12 + posY1, 0.0); // D2
        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1
    glEnd();

    // bidang V
    glColor3f(0.016, 0.4, 0.655);
    glBegin(GL_POLYGON);
        glVertex3f(19.37 + posX1, 7.12 + posY1, 0.0); // D2
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1
    glEnd();

    // bidang X
    glColor3f(0, 0.333, 0.475);
    glBegin(GL_POLYGON);
        glVertex3f(12.05 + posX1, 6.91 + posY1, 0.0); // W1
        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1
        glVertex3f(13.66 + posX1, 7.69 + posY1, 0.0); // V1
    glEnd();

    // bidang W
    glColor3f (0.851, 0.988, 0.996);
    glBegin(GL_POLYGON);
        glVertex3f(13.66 + posX1, 7.69 + posY1, 0.0); // V1
        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1
        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1
        glVertex3f(18.18 + posX1, 8.0 + posY1, 0.0); // P1
        glVertex3f(16.96 + posX1, 8.21 + posY1, 0.0); // N1
        glVertex3f(15.61 + posX1, 8.21 + posY1, 0.0); // O1
        glVertex3f(14.05 + posX1, 8.0 + posY1, 0.0); // M1
    glEnd();

     // GARIS DIAMOND START
    //glColor3f (0.937, 0.965, 0.969);
    glBegin(GL_LINES);
        glLineWidth(0.5f);
        glColor3f (1.0, 1.0, 1.0);
        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(11.3 + posX1, 6.1 + posY1, 0.0); // Z1

        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2

        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2

        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2

        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2

        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(19.3 + posX1, 5.35 + posY1, 0.0); // F2

        glVertex3f(16.0 + posX1, 1.0 + posY1, 0.0); // A2
        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2

        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2
        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2

        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2
        glVertex3f(20.07 + posX1, 6.36 + posY1, 0.0); // E2

        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1

        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2

        glVertex3f(20.33 + posX1, 6.86 + posY1, 0.0); // C2
        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1

        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1
        glVertex3f(19.37 + posX1, 7.12 + posY1, 0.0); // D2

        glVertex3f(19.37 + posX1, 7.12 + posY1, 0.0); // D2
        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1

        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1

        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2

        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1
        glVertex3f(18.39 + posX1, 5.98 + posY1, 0.0); // G2

        glVertex3f(18.39 + posX1, 5.98 + posY1, 0.0); // G2
        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2

        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2
        glVertex3f(20.71 + posX1, 5.95 + posY1, 0.0); // B2

        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2

        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2

        glVertex3f(19.5 + posX1, 5.35 + posY1, 0.0); // F2
        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2

        glVertex3f(18.5 + posX1, 5.0 + posY1, 0.0); // H2
        glVertex3f(18.39 + posX1, 5.98 + posY1, 0.0); // G2

        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1

        glVertex3f(18.33 + posX1, 7.3 + posY1, 0.0); // R1
        glVertex3f(16.9 + posX1, 7.09 + posY1, 0.0); // S1

        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2

        glVertex3f(16.0 + posX1, 5.0 + posY1, 0.0); // I2
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2

        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2

        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2

        glVertex3f(14.0 + posX1, 5.0 + posY1, 0.0); // J2
        glVertex3f(13.83 + posX1, 6.15 + posY1, 0.0); // M2

        glVertex3f(15.09 + posX1, 7.14 + posY1, 0.0); // T1
        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1

        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1
        glVertex3f(13.83 + posX1, 6.15 + posY1, 0.0); // M2

        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1
        glVertex3f(13.36 + posX1, 7.29 + posY1, 0.0); // P2

        glVertex3f(13.36 + posX1, 7.29 + posY1, 0.0); // P2
        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2

        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(11.3 + posX1, 6.1 + posY1, 0.0); // Z1

        glVertex3f(11.3 + posX1, 6.1 + posY1, 0.0); // Z1
        glVertex3f(12.33 + posX1, 6.32 + posY1, 0.0); // L2

        glVertex3f(12.8 + posX1, 5.33 + posY1, 0.0); // O2
        glVertex3f(12.05 + posX1, 6.91 + posY1, 0.0); // W1

        glVertex3f(12.05 + posX1, 6.91 + posY1, 0.0); // W1
        glVertex3f(13.36 + posX1, 7.29 + posY1, 0.0); // P2

        glVertex3f(12.05 + posX1, 6.91 + posY1, 0.0); // W1
        glVertex3f(13.66 + posX1, 7.69 + posY1, 0.0); // V1

        glVertex3f(13.66 + posX1, 7.69 + posY1, 0.0); // V1
        glVertex3f(13.66 + posX1, 7.37 + posY1, 0.0); // U1

        glVertex3f(13.66 + posX1, 7.69 + posY1, 0.0); // V1
        glVertex3f(14.05 + posX1, 8.0 + posY1, 0.0); // M1

        glVertex3f(14.05 + posX1, 8.0 + posY1, 0.0); // M1
        glVertex3f(15.61 + posX1, 8.21 + posY1, 0.0); // O1

        glVertex3f(15.61 + posX1, 8.21 + posY1, 0.0); // O1
        glVertex3f(16.96 + posX1, 8.21 + posY1, 0.0); // N1

        glVertex3f(16.96 + posX1, 8.21 + posY1, 0.0); // N1
        glVertex3f(18.18 + posX1, 8.0 + posY1, 0.0); // P1

        glVertex3f(18.18 + posX1, 8.0 + posY1, 0.0); // P1
        glVertex3f(18.72 + posX1, 7.66 + posY1, 0.0); // Q1
    glEnd();
    // GARIS DIAMOND END

// DIAMOND END

}

void pinguin()
{
    // PINGUIN START
    // bidang Z
    glColor3f(0.051, 0.063, 0.251);
    glBegin(GL_POLYGON);
        glVertex3f(25.65 + posX2, 0.96 + posY2, 0.0); // A4
        glVertex3f(26.01 + posX2, 1.41 + posY2, 0.0); // Z3
        glVertex3f(26.66 + posX2, 0.95 + posY2, 0.0); // D4
    glEnd();

    // bidang W
    glColor3f(0.337, 0.569, 0.784);
    glBegin(GL_POLYGON);
        glVertex3f(26.01 + posX2, 1.41 + posY2, 0.0); // Z3
        glVertex3f(26.66 + posX2, 0.95 + posY2, 0.0); // D4
        glVertex3f(27.62 + posX2, 0.94 + posY2, 0.0); // C4
        glVertex3f(28.14 + posX2, 1.4 + posY2, 0.0); // W3
        glVertex3f(26.99 + posX2, 2.6 + posY2, 0.0); // U3
    glEnd();

    // bidang A1
    glColor3f(0.051, 0.063, 0.251);
    glBegin(GL_POLYGON);
        glVertex3f(27.62 + posX2, 0.94 + posY2, 0.0); // C4
        glVertex3f(28.14 + posX2, 1.4 + posY2, 0.0); // W3
        glVertex3f(28.43 + posX2, 0.93 + posY2, 0.0); // B4
    glEnd();

    // bidang V
    glColor3f(0.463, 0.698, 0.843);
    glBegin(GL_POLYGON);
        glVertex3f(26.99 + posX2, 2.6 + posY2, 0.0); // U3
        glVertex3f(26.01 + posX2, 1.41 + posY2, 0.0); // Z3
        glVertex3f(25.00 + posX2, 2.0 + posY2, 0.0); // T3
        glVertex3f(25.03 + posX2, 3.41 + posY2, 0.0); // K3
    glEnd();

    // bidang Y
    glColor3f(0.631, 0.78, 0.898);
    glBegin(GL_POLYGON);
        glVertex3f(26.01 + posX2, 1.41 + posY2, 0.0); // Z3
        glVertex3f(25.00 + posX2, 2.0 + posY2, 0.0); // T3
        glVertex3f(25.65 + posX2, 0.96 + posY2, 0.0); // A4
    glEnd();


    // bidang X
    glColor3f(0.463, 0.698, 0.843);
    glBegin(GL_POLYGON);
        glVertex3f(26.99 + posX2, 2.6 + posY2, 0.0); // U3
        glVertex3f(28.14 + posX2, 1.4 + posY2, 0.0); // W3
        glVertex3f(29.13 + posX2, 2.03 + posY2, 0.0); // V3
        glVertex3f(29.08 + posX2, 3.44 + posY2, 0.0); // L3
    glEnd();

    // bidang b1
    glColor3f(0.631, 0.78, 0.898);
    glBegin(GL_POLYGON);
        glVertex3f(28.14 + posX2, 1.4 + posY2, 0.0); // W3
        glVertex3f(29.13 + posX2, 2.03 + posY2, 0.0); // V3
        glVertex3f(28.43 + posX2, 0.93 + posY2, 0.0); // B3
    glEnd();

    // bidang Q
    glColor3f(0.557, 0.765, 0.882);
    glBegin(GL_POLYGON);
        glVertex3f(25.03 + posX2, 3.41 + posY2, 0.0); // K3
        glVertex3f(26.99 + posX2, 2.6 + posY2, 0.0); // U3
        glVertex3f(29.08 + posX2, 3.44 + posY2, 0.0); // L3
        glVertex3f(28.5 + posX2, 5.5 + posY2, 0.0); // U2
        glVertex3f(25.57 + posX2, 5.47 + posY2, 0.0); // V2
    glEnd();

    // bidang T
    glColor3f(0.824, 0.902, 0.941);
    glBegin(GL_POLYGON);
        glVertex3f(25.00 + posX2, 2.0 + posY2, 0.0); // T3
        glVertex3f(25.03 + posX2, 3.41 + posY2, 0.0); // K3
        glVertex3f(24.7 + posX2, 4.69 + posY2, 0.0); // J3
        glVertex3f(24.39 + posX2, 3.13 + posY2, 0.0); // S3
    glEnd();

    // bidang P
    glColor3f(0.62, 0.812, 0.91);
    glBegin(GL_POLYGON);
        glVertex3f(24.7 + posX2, 4.69 + posY2, 0.0); // J3
        glVertex3f(24.54 + posX2, 4.01 + posY2, 0.0); // I3
        glVertex3f(23.43 + posX2, 3.52 + posY2, 0.0); // H3
        glVertex3f(24.05 + posX2, 4.58 + posY2, 0.0); // F3
        glVertex3f(25.57 + posX2, 5.47 + posY2, 0.0); // H3
        glVertex3f(25.57 + posX2, 5.47 + posY2, 0.0); // V2
        glVertex3f(25.03 + posX2, 3.41 + posY2, 0.0); // K3
    glEnd();

    // bidang O
    glColor3f(0.827, 0.91, 0.933);
    glBegin(GL_POLYGON);
        glVertex3f(24.05 + posX2, 4.58 + posY2, 0.0); // F3
        glVertex3f(23.43 + posX2, 3.52 + posY2, 0.0); // H3
        glVertex3f(23.04 + posX2, 3.56 + posY2, 0.0); // G3
        glVertex3f(23.55 + posX2, 4.65 + posY2, 0.0); // E3
    glEnd();

    // bidang R
    glColor3f(0.62, 0.812, 0.91);
    glBegin(GL_POLYGON);
        glVertex3f(28.5 + posX2, 5.5 + posY2, 0.0); // U3
        glVertex3f(29.08 + posX2, 3.44 + posY2, 0.0); // L3
        glVertex3f(29.38 + posX2, 4.71 + posY2, 0.0); // M3
        glVertex3f(29.56 + posX2, 4.01 + posY2, 0.0); // R3
        glVertex3f(30.66 + posX2, 3.59 + posY2, 0.0); // P3
        glVertex3f(30.01 + posX2, 4.58 + posY2, 0.0); // Z2
    glEnd();

    // bidang S
    glColor3f(0.827, 0.91, 0.933);
    glBegin(GL_POLYGON);
        glVertex3f(30.66 + posX2, 3.59 + posY2, 0.0); // P3
        glVertex3f(30.01 + posX2, 4.58 + posY2, 0.0); // Z2
        glVertex3f(30.56 + posX2, 4.59 + posY2, 0.0); // W2
        glVertex3f(31.09 + posX2, 3.56 + posY2, 0.0); // Q3
    glEnd();

    // bidang U
    glColor3f(0.824, 0.902, 0.941);
    glBegin(GL_POLYGON);
        glVertex3f(29.08 + posX2, 3.44 + posY2, 0.0); // L3
        glVertex3f(29.13 + posX2, 2.03 + posY2, 0.0); // V3
        glVertex3f(29.76 + posX2, 3.06 + posY2, 0.0); // N3
        glVertex3f(29.38 + posX2, 4.71 + posY2, 0.0); // M3
    glEnd();

    // bidang M
    glColor3f (0.78, 0.89, 0.933);
    glBegin(GL_POLYGON);
        glVertex3f(27.56 + posX2, 7.13 + posY2, 0.0); // U
        glVertex3f(28.5 + posX2, 5.5 + posY2, 0.0); // U2
        glVertex3f(30.01 + posX2, 4.58 + posY2, 0.0); // Z2
        glVertex3f(30.56 + posX2, 4.59 + posY2, 0.0); // W2
        glVertex3f(28.82 + posX2, 6.58 + posY2, 0.0); // T2
    glEnd();

    // bidang L
    glColor3f(0.718, 0.859, 0.929);
    glBegin(GL_POLYGON);
        glVertex3f(28.5 + posX2, 5.5 + posY2, 0.0); // U2
        glVertex3f(25.57 + posX2, 5.47 + posY2, 0.0); // V2
        glVertex3f(26.51 + posX2, 7.11 + posY2, 0.0); // R2
        glVertex3f(27.04 + posX2, 7.45 + posY2, 0.0); // I10
        glVertex3f(27.56 + posX2, 7.13 + posY2, 0.0); // U
        glVertex3f(28.5 + posX2, 5.5 + posY2, 0.0); // U2
    glEnd();

    // bidang N
    glColor3f(0.153, 0.271, 0.565);
    glBegin(GL_POLYGON);
        glVertex3f(27.56 + posX2, 7.13 + posY2, 0.0); // U
        glVertex3f(28.82 + posX2, 6.58 + posY2, 0.0); // T2
        glVertex3f(28.4 + posX2, 7.44 + posY2, 0.0); // Z
        glVertex3f(28.17 + posX2, 7.56 + posY2, 0.0); // V
    glEnd();

    // bidang I
    glColor3f(0.773, 0.863, 0.894);
    glBegin(GL_POLYGON);
        glVertex3f(28.4 + posX2, 7.44 + posY2, 0.0); // W
        glVertex3f(28.4 + posX2, 7.44 + posY2, 0.0); // Z
        glVertex3f(28.17 + posX2, 7.56 + posY2, 0.0); // V
        glVertex3f(28.22 + posX2, 8.32 + posY2, 0.0); // F
    glEnd();

    // bidang K
    glColor3f(0.78, 0.89, 0.933);
    glBegin(GL_POLYGON);
        glVertex3f(24.05 + posX2, 4.58 + posY2, 0.0); // F3
        glVertex3f(23.55 + posX2, 4.65 + posY2, 0.0); // E3
        glVertex3f(25.57 + posX2, 5.47 + posY2, 0.0); // V2
        glVertex3f(26.51 + posX2, 7.11 + posY2, 0.0); // R2
        glVertex3f(25.32 + posX2, 6.57 + posY2, 0.0); // s2
    glEnd();

    // bidang J
    glColor3f(0.153, 0.271, 0.565);
    glBegin(GL_POLYGON);
        glVertex3f(26.51 + posX2, 7.11 + posY2, 0.0); // R2
        glVertex3f(25.32 + posX2, 6.57 + posY2, 0.0); // S2
        glVertex3f(25.69 + posX2, 7.43 + posY2, 0.0); // O
        glVertex3f(25.93 + posX2, 7.56 + posY2, 0.0); // P
    glEnd();

    // bidang E
    glColor3f(0.773, 0.863, 0.894);
    glBegin(GL_POLYGON);
        glVertex3f(25.7 + posX2, 7.85 + posY2, 0.0); // N
        glVertex3f(25.69 + posX2, 7.43 + posY2, 0.0); // O
        glVertex3f(25.93 + posX2, 7.56 + posY2, 0.0); // P
        glVertex3f(25.82 + posX2, 8.3 + posY2, 0.0); // L
    glEnd();

    // bidang B
    glColor3f(0.867, 0.914, 0.925);
    glBegin(GL_POLYGON);
        glVertex3f(25.93 + posX2, 7.56 + posY2, 0.0); // P
        glVertex3f(25.82 + posX2, 8.3 + posY2, 0.0); // L
        glVertex3f(26.26 + posX2, 8.57 + posY2, 0.0); // K
        glVertex3f(26.49 + posX2, 8.37 + posY2, 0.0); // J
        glVertex3f(26.73 + posX2, 7.88 + posY2, 0.0); // Q
        glVertex3f(26.58 + posX2, 7.74 + posY2, 0.0); // T
        glVertex3f(25.82 + posX2, 8.3 + posY2, 0.0); // L
        glVertex3f(27.04 + posX2, 7.45 + posY2, 0.0); // I10
        glVertex3f(26.51 + posX2, 7.11 + posY2, 0.0); // R2
    glEnd();

    // bidang D
    glColor3f(0.867, 0.914, 0.925);
    glBegin(GL_POLYGON);
        glVertex3f(28.17 + posX2, 7.56 + posY2, 0.0); // V
        glVertex3f(28.22 + posX2, 8.32 + posY2, 0.0); // F
        glVertex3f(27.82 + posX2, 8.57 + posY2, 0.0); // G
        glVertex3f(27.55 + posX2, 8.35 + posY2, 0.0); // H
        glVertex3f(27.38 + posX2, 7.88 + posY2, 0.0); // R
        glVertex3f(27.52 + posX2, 7.76 + posY2, 0.0); // Q2
        glVertex3f(27.04 + posX2, 7.45 + posY2, 0.0); // I10
        glVertex3f(27.56 + posX2, 7.13 + posY2, 0.0); // U
    glEnd();

    // bidang F
    glColor3f(0.031, 0.067, 0.251);
    glBegin(GL_POLYGON);
        glVertex3f(26.58 + posX2, 7.74 + posY2, 0.0); // T
        glVertex3f(27.04 + posX2, 7.45 + posY2, 0.0); // I10
        glVertex3f(27.52 + posX2, 7.76 + posY2, 0.0); // Q2
        glVertex3f(27.03 + posX2, 8.14 + posY2, 0.0); // S
    glEnd();

    // bidang G
    glColor3f(0.31, 0.478, 0.675);
    glBegin(GL_POLYGON);
        glVertex3f(26.83 + posX2, 7.83 + posY2, 0.0); // B3
        glVertex3f(27.03 + posX2, 8.0 + posY2, 0.0); // A3
        glVertex3f(27.26 + posX2, 7.84 + posY2, 0.0); // D3
    glEnd();

    // bidang H
    glColor3f(0.31, 0.478, 0.675);
    glBegin(GL_POLYGON);
        glVertex3f(26.83 + posX2, 7.83 + posY2, 0.0); // B3
        glVertex3f(27.26 + posX2, 7.84 + posY2, 0.0); // D3
        glVertex3f(27.03 + posX2, 7.69 + posY2, 0.0); // C3
    glEnd();

    // bidang C
    glColor3f(0.094, 0.204, 0.431);
    glBegin(GL_POLYGON);
        glVertex3f(26.49 + posX2, 8.37 + posY2, 0.0); // J
        glVertex3f(26.73 + posX2, 7.89 + posY2, 0.0); // Q
        glVertex3f(27.03 + posX2, 8.14 + posY2, 0.0); // S
        glVertex3f(27.38 + posX2, 7.88 + posY2, 0.0); // R
        glVertex3f(27.55 + posX2, 8.35 + posY2, 0.0); // H
        glVertex3f(27.04 + posX2, 8.67 + posY2, 0.0); // I
    glEnd();

    // bidang A
    glColor3f(0.039, 0.071, 0.271);
    glBegin(GL_POLYGON);
        glVertex3f(27.04 + posX2, 8.67 + posY2, 0.0); // I
        glVertex3f(26.49 + posX2, 8.37 + posY2, 0.0); // J
        glVertex3f(26.26 + posX2, 8.57 + posY2, 0.0); // K
        glVertex3f(25.82 + posX2, 8.3 + posY2, 0.0); // L
        glVertex3f(26.03 + posX2, 8.8 + posY2, 0.0); // M
        glVertex3f(26.6 + posX2, 9.29 + posY2, 0.0); // C
        glVertex3f(27.46 + posX2, 9.29 + posY2, 0.0); // D
        glVertex3f(28.08 + posX2, 8.8 + posY2, 0.0); // E
        glVertex3f(28.22 + posX2, 8.32 + posY2, 0.0); // F
        glVertex3f(27.82 + posX2, 8.57 + posY2, 0.0); // G
        glVertex3f(27.55 + posX2, 8.35 + posY2, 0.0); // H
    glEnd();

    lingkaran(26.26 + posX2, 8.16 + posY2, 0.15, 0.043, 0.039, 0.047);
    lingkaran(27.83 + posX2, 8.15 + posY2, 0.15, 0.043, 0.039, 0.047);
// PINGUIN END

}

void bunga ()
{
    // BUNGA START
    // bidang A
    glColor3f(0.275, 0.392, 0.173);
    glBegin(GL_POLYGON);
        glVertex3f(35.91 + posX3, 0.84 + posY3, 0.0); // K4
        glVertex3f(36.32 + posX3, 1.03 + posY3, 0.0); // L4
        glVertex3f(35.89 + posX3, 1.42 + posY3, 0.0); // M4
        glVertex3f(35.52 + posX3, 1.39 + posY3, 0.0); // J4
    glEnd();

    // bidang B
    glColor3f(0.275, 0.392, 0.173);
    glBegin(GL_POLYGON);
        glVertex3f(36.07 + posX3, 1.67 + posY3, 0.0); // N4
        glVertex3f(36.2 + posX3, 1.5 + posY3, 0.0); // Q4
        glVertex3f(36.35 + posX3, 1.3 + posY3, 0.0); // O4
        glVertex3f(36.32 + posX3, 1.03 + posY3, 0.0); // L4
        glVertex3f(35.89 + posX3, 1.42 + posY3, 0.0); // M4
        glVertex3f(35.52 + posX3, 1.39 + posY3, 0.0); // J4
    glEnd();

    // bidang C
    glColor3f(0.478, 0.537, 0.38);
    glBegin(GL_POLYGON);
        glVertex3f(35.79 + posX3, 2.87 + posY3, 0.0); // P4
        glVertex3f(36.07 + posX3, 1.67 + posY3, 0.0); // N4
        glVertex3f(35.52 + posX3, 1.39 + posY3, 0.0); // J4
    glEnd();

     // bidang D
    glColor3f(0.702, 0.71, 0.576);
    glBegin(GL_POLYGON);
        glVertex3f(36.27 + posX3, 3.78 + posY3, 0.0); // S4
        glVertex3f(36.21 + posX3, 2.86 + posY3, 0.0); // R4
        glVertex3f(36.2 + posX3, 1.5 + posY3, 0.0); // Q4
        glVertex3f(36.07 + posX3, 1.67 + posY3, 0.0); // N4
        glVertex3f(35.79 + posX3, 2.87 + posY3, 0.0); // P4
    glEnd();

    // bidang E, N
    glColor3f(0.584, 0.62, 0.467);
    glBegin(GL_POLYGON);
        glVertex3f(36.27 + posX3, 3.78 + posY3, 0.0); // S4
        glVertex3f(36.21 + posX3, 2.86 + posY3, 0.0); // R4
        glVertex3f(37.51 + posX3, 4.78 + posY3, 0.0); // E5
        glVertex3f(37.48 + posX3, 5.52 + posY3, 0.0); // B6

    glEnd();

    // bidang F, G
    glColor3f(0.753, 0.639, 0.557);
    glBegin(GL_POLYGON);
        glVertex3f(37.09 + posX3, 4.41 + posY3, 0.0); // D5
        glVertex3f(37.4 + posX3, 4.4 + posY3, 0.0); // C5
        glVertex3f(37.69 + posX3, 4.59 + posY3, 0.0); // Z4
        glVertex3f(37.24 + posX3, 4.04 + posY3, 0.0); // A5
        glVertex3f(36.8 + posX3, 4.0 + posY3, 0.0); // B5
    glEnd();

    // bidang G
    glColor3f(0.545, 0.62, 0.416);
    glBegin(GL_POLYGON);
        glVertex3f(36.46 + posX3, 5.42 + posY3, 0.0); // N5
        glVertex3f(36.61 + posX3, 5.06 + posY3, 0.0); // H5
        glVertex3f(36.62 + posX3, 4.72 + posY3, 0.0); // K5
        glVertex3f(36.62 + posX3, 4.27 + posY3, 0.0); // G5
        glVertex3f(36.85 + posX3, 4.61 + posY3, 0.0); // I5
        glVertex3f(36.82 + posX3, 4.93 + posY3, 0.0); // J5
        glVertex3f(36.65 + posX3, 5.45 + posY3, 0.0); // O5
    glEnd();

    // bidang G BAGIAN 2
    glColor3f(0.545, 0.62, 0.416);
    glBegin(GL_POLYGON);
        glVertex3f(36.0 + posX3, 6.0 + posY3, 0.0); // V5
        glVertex3f(36.46 + posX3, 5.42 + posY3, 0.0); // N5
        glVertex3f(36.65 + posX3, 5.45 + posY3, 0.0); // O5
    glEnd();

//bidang H
    glColor3f(0.635, 0.69, 0.467);
    glBegin(GL_POLYGON);
        glVertex3f(36.6 + posX3, 4.72 + posY3, 0.0); // K5
        glVertex3f(35.59 + posX3, 4.96 + posY3, 0.0); // L5
        glVertex3f(35.34 + posX3, 5.71 + posY3, 0.0); // M5
        glVertex3f(36.46 + posX3, 5.42 + posY3, 0.0); // N5
        glVertex3f(36.61 + posX3, 5.06 + posY3, 0.0); // H5
    glEnd();

    // bidang J
    glColor3f(0.475, 0.573, 0.365);
    glBegin(GL_POLYGON);
        glVertex3f(36.0 + posX3, 6.0 + posY3, 0.0); // V5
        glVertex3f(36.46 + posX3, 5.42 + posY3, 0.0); // N5
        glVertex3f(35.34 + posX3, 5.71 + posY3, 0.0); // M5
    glEnd();

    // bidang J BAGIAN 2
    glColor3f(0.475, 0.573, 0.365);
    glBegin(GL_POLYGON);
        glVertex3f(36.0 + posX3, 6.0 + posY3, 0.0); // V5
        glVertex3f(35.65 + posX3, 6.14 + posY3, 0.0); // W5
        glVertex3f(34.88 + posX3, 6.06 + posY3, 0.0); // Q5
        glVertex3f(35.34 + posX3, 5.71 + posY3, 0.0); // M5
    glEnd();

    // bidang L
    glColor3f(0.557, 0.647, 0.51);
    glBegin(GL_POLYGON);
        glVertex3f(35.65 + posX3, 6.14 + posY3, 0.0); // W5
        glVertex3f(34.88 + posX3, 6.06 + posY3, 0.0); // Q5
        glVertex3f(34.08 + posX3, 6.28 + posY3, 0.0); // R5
        glVertex3f(35.3 + posX3, 6.26 + posY3, 0.0); // Z5
    glEnd();

    // bidang M
    glColor3f(0.459, 0.549, 0.361);
    glBegin(GL_POLYGON);
        glVertex3f(36.0 + posX3, 6.0 + posY3, 0.0); // V5
        glVertex3f(35.65 + posX3, 6.14 + posY3, 0.0); // W5
        glVertex3f(35.3 + posX3, 6.26 + posY3, 0.0); // Z5
        glVertex3f(34.08 + posX3, 6.28 + posY3, 0.0); // R5
        glVertex3f(34.64 + posX3, 6.52 + posY3, 0.0); // S5
        glVertex3f(35.92 + posX3, 6.44 + posY3, 0.0); // T5
    glEnd();

    // bidang K
    glColor3f(0.647, 0.702, 0.51);
    glBegin(GL_POLYGON);
        glVertex3f(36.0 + posX3, 6.0 + posY3, 0.0); // V5
        glVertex3f(35.92 + posX3, 6.44 + posY3, 0.0); // T5
        glVertex3f(36.42 + posX3, 6.25 + posY3, 0.0); // U5
        glVertex3f(36.65 + posX3, 5.45 + posY3, 0.0); // Q5
    glEnd();

    // bidang I
    glColor3f(0.506, 0.565, 0.373);
    glBegin(GL_POLYGON);
        glVertex3f(36.42 + posX3, 6.25 + posY3, 0.0); // U5
        glVertex3f(36.82 + posX3, 4.93 + posY3, 0.0); // J5
        glVertex3f(36.96 + posX3, 5.44 + posY3, 0.0); // P5

    glEnd();

    //bidang O
    glColor3f(0.357, 0.549, 0.298);
    glBegin(GL_POLYGON);
        glVertex3f(37.51 + posX3, 4.78 + posY3, 0.0); // E5
        glVertex3f(37.78 + posX3, 5.05 + posY3, 0.0); // F5
        glVertex3f(37.83 + posX3, 5.87 + posY3, 0.0); // I6
        glVertex3f(37.46 + posX3, 6.19 + posY3, 0.0); // A6
    glEnd();

    //bidang A1
    glColor3f(0.51, 0.561, 0.38);
    glBegin(GL_POLYGON);
        glVertex3f(37.83 + posX3, 5.87 + posY3, 0.0); // I6
        glVertex3f(37.46 + posX3, 6.19 + posY3, 0.0); // A6
        glVertex3f(37.2 + posX3, 6.56 + posY3, 0.0); // K6
        glVertex3f(37.78 + posX3, 6.7 + posY3, 0.0); // J6
    glEnd();

    //bidang Q DAN R
    glColor3f(0.718, 0.655, 0.545);
    glBegin(GL_POLYGON);
        glVertex3f(37.48 + posX3, 5.52 + posY3, 0.0); // B6
        glVertex3f(37.14 + posX3, 5.75 + posY3, 0.0); // C6
        glVertex3f(37.07 + posX3, 6.35 + posY3, 0.0); // D6
        glVertex3f(37.3 + posX3, 6.0 + posY3, 0.0); // G6
        glVertex3f(37.47 + posX3, 5.99 + posY3, 0.0); // H6
    glEnd();

    //bidang C1
    glColor3f(0.286, 0.506, 0.263);
    glBegin(GL_POLYGON);
        glVertex3f(37.2 + posX3, 6.56 + posY3, 0.0); // K6
        glVertex3f(37 + posX3, 6.6 + posY3, 0.0); // M6
        glVertex3f(36.69 + posX3, 6.81 + posY3, 0.0); // P6
        glVertex3f(37.44 + posX3, 6.91 + posY3, 0.0); // Q6
        glVertex3f(37.87 + posX3, 6.88 + posY3, 0.0); // L6
        glVertex3f(37.78 + posX3, 6.7 + posY3, 0.0); // J6
    glEnd();

    //bidang B1
    glColor3f(0.612, 0.616, 0.51);
    glBegin(GL_POLYGON);
        glVertex3f(37 + posX3, 6.6 + posY3, 0.0); // M6
        glVertex3f(36.89 + posX3, 6.17 + posY3, 0.0); // N6
        glVertex3f(36.67 + posX3, 6.51 + posY3, 0.0); // O6
        glVertex3f(36.69 + posX3, 6.81 + posY3, 0.0); // P6
    glEnd();

    //bidang D1
    glColor3f(0.463, 0.518, 0.353);
    glBegin(GL_POLYGON);
        glVertex3f(37.44 + posX3, 6.91 + posY3, 0.0); // Q6
        glVertex3f(37.87 + posX3, 6.88 + posY3, 0.0); // L6
        glVertex3f(38.07 + posX3, 6.63 + posY3, 0.0); // N7
        glVertex3f(38.09 + posX3, 7.13 + posY3, 0.0); // O7
        glVertex3f(37.77 + posX3, 7.34 + posY3, 0.0); // T7
    glEnd();

    //bidang E1
    glColor3f(0.251, 0.396, 0.259);
    glBegin(GL_POLYGON);
        glVertex3f(38.09 + posX3, 7.13 + posY3, 0.0); // O7
        glVertex3f(38.25 + posX3, 7.22 + posY3, 0.0); // P7
        glVertex3f(38.43 + posX3, 7.06 + posY3, 0.0); // Q7
        glVertex3f(38.36 + posX3, 7.41 + posY3, 0.0); // R7
        glVertex3f(37.99 + posX3, 7.64 + posY3, 0.0); // S7
        glVertex3f(37.77 + posX3, 7.34 + posY3, 0.0); // T7
    glEnd();

    //bidang F1
    glColor3f(0.773, 0, 0.357);
    glBegin(GL_POLYGON);
        glVertex3f(36.69 + posX3, 6.81 + posY3, 0.0); // P6
        glVertex3f(37.44 + posX3, 6.91 + posY3, 0.0); // Q6
        glVertex3f(37.77 + posX3, 7.34 + posY3, 0.0); // T7
        glVertex3f(37.99 + posX3, 7.64 + posY3, 0.0); // S7
        glVertex3f(37.92 + posX3, 9.0 + posY3, 0.0); // U7
        glVertex3f(37.5 + posX3, 8.68 + posY3, 0.0); // V7
        glVertex3f(37.42 + posX3, 7.53 + posY3, 0.0); // W7
    glEnd();

    //bidang G1
    glColor3f(0.886, 0.153, 0.478);
    glBegin(GL_POLYGON);
        glVertex3f(37.46 + posX3, 8.0 + posY3, 0.0); // A8
        glVertex3f(37.42 + posX3, 7.53 + posY3, 0.0); // W7
        glVertex3f(36.69 + posX3, 6.81 + posY3, 0.0); // P6
        glVertex3f(36.1 + posX3, 6.84 + posY3, 0.0); // Z7
        glVertex3f(35.34 + posX3, 7.54 + posY3, 0.0); // I8
        glVertex3f(34.5 + posX3, 7.94 + posY3, 0.0); // F8
        glVertex3f(35.34 + posX3, 8.05 + posY3, 0.0); // E8
        glVertex3f(35.94 + posX3, 7.77 + posY3, 0.0); // G8
        glVertex3f(36.54 + posX3, 8.04 + posY3, 0.0); // H8
        glVertex3f(37.21 + posX3, 8.07 + posY3, 0.0); // B8
    glEnd();

    //bidang H1
    glColor3f(0.839, 0.427, 0.573);
    glBegin(GL_POLYGON);
        glVertex3f(35.34 + posX3, 8.05 + posY3, 0.0); // E8
        glVertex3f(35.94 + posX3, 7.77 + posY3, 0.0); // G8
        glVertex3f(36.54 + posX3, 8.04 + posY3, 0.0); // H8
        glVertex3f(37.21 + posX3, 8.07 + posY3, 0.0); // B8
        glVertex3f(36.83 + posX3, 8.29 + posY3, 0.0); // C8
        glVertex3f(35.88 + posX3, 8.32 + posY3, 0.0); // D8
    glEnd();

    //bidang J1
    glColor3f(0.8, 0, 0.29);
    glBegin(GL_POLYGON);
        glVertex3f(34.5 + posX3, 7.94 + posY3, 0.0); // F8
        glVertex3f(35.34 + posX3, 8.05 + posY3, 0.0); // E8
        glVertex3f(35.35 + posX3, 8.3 + posY3, 0.0); // L8
        glVertex3f(34.93 + posX3, 8.72 + posY3, 0.0); // K8
        glVertex3f(34.5 + posX3, 8.25 + posY3, 0.0); // J8
    glEnd();

    //bidang K1
    glColor3f(0.878, 0.337, 0.635);
    glBegin(GL_POLYGON);
        glVertex3f(35.34 + posX3, 8.05 + posY3, 0.0); // E8
        glVertex3f(35.88 + posX3, 8.32 + posY3, 0.0); // D8
        glVertex3f(36.83 + posX3, 8.29 + posY3, 0.0); // C8
        glVertex3f(36.89 + posX3, 8.9 + posY3, 0.0); // S8
        glVertex3f(36.42 + posX3, 9.07 + posY3, 0.0); // R8
        glVertex3f(36.19 + posX3, 8.97 + posY3, 0.0); // L9
        glVertex3f(35.59 + posX3, 8.7 + posY3, 0.0); // Q8
        glVertex3f(34.93 + posX3, 8.72 + posY3, 0.0); // K8
        glVertex3f(35.35 + posX3, 8.3 + posY3, 0.0); // L8
    glEnd();

    //bidang P1
    glColor3f(0.718, 0.024, 0.22);
    glBegin(GL_POLYGON);
        glVertex3f(34.93 + posX3, 8.72 + posY3, 0.0); // K8
        glVertex3f(35.31 + posX3, 8.7 + posY3, 0.0); // P8
        glVertex3f(35.29 + posX3, 8.87 + posY3, 0.0); // O8
        glVertex3f(35.09 + posX3, 9.12 + posY3, 0.0); // N8
        glVertex3f(34.82 + posX3, 8.85 + posY3, 0.0); // M8
    glEnd();

    //bidang O1
    glColor3f(0.804, 0.086, 0.396);
    glBegin(GL_POLYGON);
        glVertex3f(35.31 + posX3, 8.7 + posY3, 0.0); // P8
        glVertex3f(35.29 + posX3, 8.87 + posY3, 0.0); // O8
        glVertex3f(35.09 + posX3, 9.12 + posY3, 0.0); // N8
        glVertex3f(35.37 + posX3, 9.08 + posY3, 0.0); // U9
        glVertex3f(35.53 + posX3, 9.07 + posY3, 0.0); // N9
        glVertex3f(35.9 + posX3, 9.3 + posY3, 0.0); // M9
        glVertex3f(36.17 + posX3, 9.17 + posY3, 0.0); // K9
        glVertex3f(36.19 + posX3, 8.97 + posY3, 0.0); // L9
        glVertex3f(35.59 + posX3, 8.7 + posY3, 0.0); // Q8
    glEnd();

    //bidang N1
    glColor3f(0.851, 0.082, 0.416);
    glBegin(GL_POLYGON);
        glVertex3f(36.17 + posX3, 9.17 + posY3, 0.0); // K9
        glVertex3f(36.19 + posX3, 8.97 + posY3, 0.0); // L9
        glVertex3f(36.42 + posX3, 9.07 + posY3, 0.0); // R8
        glVertex3f(36.89 + posX3, 8.9 + posY3, 0.0); // S8
        glVertex3f(36.95 + posX3, 9.37 + posY3, 0.0); // V8
        glVertex3f(36.67 + posX3, 9.5 + posY3, 0.0); // H9
        glVertex3f(36.31 + posX3, 10.17 + posY3, 0.0); // R8
        glVertex3f(36.31 + posX3, 9.6 + posY3, 0.0); // J9
    glEnd();

    //bidang M1
    glColor3f(0.867, 0.502, 0.635);
    glBegin(GL_POLYGON);
        glVertex3f(36.95 + posX3, 9.37 + posY3, 0.0); // V8
        glVertex3f(36.88 + posX3, 8.73 + posY3, 0.0); // T8
        glVertex3f(37.31 + posX3, 9.08 + posY3, 0.0); // U8
        glVertex3f(37.19 + posX3, 9.8 + posY3, 0.0); // Z8
        glVertex3f(36.85 + posX3, 10.13 + posY3, 0.0); // W8
    glEnd();

    //bidang L1
    glColor3f(0.773, 0.051, 0.373);
    glBegin(GL_POLYGON);
        glVertex3f(37.19 + posX3, 9.8 + posY3, 0.0); // Z8
        glVertex3f(37.27 + posX3, 9.32 + posY3, 0.0); // A9
        glVertex3f(37.64 + posX3, 8.94 + posY3, 0.0); // B9
        glVertex3f(37.76 + posX3, 9.18 + posY3, 0.0); // C9
        glVertex3f(37.43 + posX3, 9.79 + posY3, 0.0); // D9
    glEnd();

     //bidang I1
    glColor3f(0.941, 0.196, 0.639);
    glBegin(GL_POLYGON);
        glVertex3f(37.31 + posX3, 9.08 + posY3, 0.0); // U8
        glVertex3f(36.88 + posX3, 8.73 + posY3, 0.0); // T8
        glVertex3f(36.83 + posX3, 8.29 + posY3, 0.0); // C8
        glVertex3f(37.21 + posX3, 8.07 + posY3, 0.0); // B8
        glVertex3f(37.46 + posX3, 8.0 + posY3, 0.0); // A8
        glVertex3f(37.5 + posX3, 8.68 + posY3, 0.0); // V7
        glVertex3f(37.92 + posX3, 9.0 + posY3, 0.0); // U7
        glVertex3f(38.34 + posX3, 9.18 + posY3, 0.0); // F9
        glVertex3f(37.75 + posX3, 9.78 + posY3, 0.0); // E9
        glVertex3f(37.43 + posX3, 9.79 + posY3, 0.0); // D9
        glVertex3f(37.76 + posX3, 9.18 + posY3, 0.0); // C9
        glVertex3f(37.64 + posX3, 8.94 + posY3, 0.0); // B9
        glVertex3f(37.27 + posX3, 9.32 + posY3, 0.0); // A9

    glEnd();

    //bidang 51
    glColor3f(0.922, 0.416, 0.706);
    glBegin(GL_POLYGON);
        glVertex3f(36.31 + posX3, 9.6 + posY3, 0.0); // J9
        glVertex3f(36.17 + posX3, 9.17 + posY3, 0.0); // K9
        glVertex3f(35.9 + posX3, 9.3 + posY3, 0.0); // M9
        glVertex3f(35.53 + posX3, 9.07 + posY3, 0.0); // N9
        glVertex3f(35.83 + posX3, 9.37 + posY3, 0.0); // T9
    glEnd();

    //bidang R1 ////
    glColor3f(0.922, 0.584, 0.722);
    glBegin(GL_POLYGON);
        glVertex3f(36.31 + posX3, 9.6 + posY3, 0.0); // J9
        glVertex3f(35.83 + posX3, 9.37 + posY3, 0.0); // T9
        glVertex3f(35.53 + posX3, 9.07 + posY3, 0.0); // N9
        glVertex3f(35.37 + posX3, 9.08 + posY3, 0.0); // U9
        glVertex3f(35.42 + posX3, 9.34 + posY3, 0.0); // V9
        glVertex3f(35.68 + posX3, 9.43 + posY3, 0.0); // R9
        glVertex3f(36.06 + posX3, 9.78 + posY3, 0.0); // S9
    glEnd();

    //bidang Q1
    glColor3f(0.808, 0.004, 0.329);
    glBegin(GL_POLYGON);
        glVertex3f(35.09 + posX3, 9.12 + posY3, 0.0); // N8
        glVertex3f(35.37 + posX3, 9.08 + posY3, 0.0); // U9
        glVertex3f(35.42 + posX3, 9.34 + posY3, 0.0); // V9
        glVertex3f(35.68 + posX3, 9.43 + posY3, 0.0); // R9
        glVertex3f(35.62 + posX3, 9.57 + posY3, 0.0); // Q9
        glVertex3f(35.27 + posX3, 9.58 + posY3, 0.0); // P9
        glVertex3f(35.0 + posX3, 9.33 + posY3, 0.0); // O9
    glEnd();

    //bidang U1
    glColor3f(0.863, 0.294, 0.541);
    glBegin(GL_POLYGON);
        glVertex3f(35.62 + posX3, 9.57 + posY3, 0.0); // Q9
        glVertex3f(35.68 + posX3, 9.43 + posY3, 0.0); // R9
        glVertex3f(36.06 + posX3, 9.78 + posY3, 0.0); // S9
        glVertex3f(36.31 + posX3, 9.6 + posY3, 0.0); // J9
        glVertex3f(36.31 + posX3, 10.17 + posY3, 0.0); // I9
        glVertex3f(35.99 + posX3, 10.21 + posY3, 0.0); // Z9
        glVertex3f(35.61 + posX3, 9.77 + posY3, 0.0); // W9
    glEnd();

    //bidang T1
    glColor3f(0.694, 0.039, 0.243);
    glBegin(GL_POLYGON);
        glVertex3f(36.36 + posX3, 10.07 + posY3, 0.0); // G9
        glVertex3f(36.67 + posX3, 9.5 + posY3, 0.0); // H9
        glVertex3f(36.95 + posX3, 9.37 + posY3, 0.0); // V8
        glVertex3f(36.85 + posX3, 10.13 + posY3, 0.0); // W8
    glEnd();

    //bidang P
    glColor3f(0.357, 0.549, 0.298);
    glBegin(GL_POLYGON);
        glVertex3f(37.81 + posX3, 5.53 + posY3, 0.0); // R6
        glVertex3f(37.78 + posX3, 5.05 + posY3, 0.0); // F5
        glVertex3f(39.11 + posX3, 6.09 + posY3, 0.0); // B7
        glVertex3f(39.0 + posX3, 6.2 + posY3, 0.0); // Z6

    glEnd();

    //bidang P BAGIAN 2
    glColor3f(0.357, 0.549, 0.298);
    glBegin(GL_POLYGON);
        glVertex3f(39.11 + posX3, 6.09 + posY3, 0.0); // B7
        glVertex3f(39.32 + posX3, 6.23 + posY3, 0.0); // A7
        glVertex3f(39.63 + posX3, 6.75 + posY3, 0.0); // F7
        glVertex3f(40.07 + posX3, 7.45 + posY3, 0.0); // J7
        glVertex3f(39.55 + posX3, 6.8 + posY3, 0.0); // I7
        glVertex3f(39.21 + posX3, 6.36 + posY3, 0.0); // S6
        glVertex3f(39.0 + posX3, 6.2 + posY3, 0.0); // Z6
    glEnd();

    //bidang Z
    glColor3f(0.11, 0.431, 0.153);
    glBegin(GL_POLYGON);
        glVertex3f(39.11 + posX3, 6.09 + posY3, 0.0); // B7
        glVertex3f(38.52 + posX3, 5.62 + posY3, 0.0); // E7
        glVertex3f(39.24 + posX3, 5.69 + posY3, 0.0); // D7
        glVertex3f(39.94 + posX3, 6.12 + posY3, 0.0); // C7

    glEnd();

    //bidang Y
    glColor3f(0.529, 0.612, 0.392);
    glBegin(GL_POLYGON);
        glVertex3f(39.11 + posX3, 6.09 + posY3, 0.0); // B7
        glVertex3f(39.94 + posX3, 6.12 + posY3, 0.0); // C7
        glVertex3f(40.26 + posX3, 6.85 + posY3, 0.0); // G7
        glVertex3f(39.63 + posX3, 6.75 + posY3, 0.0); // F7
        glVertex3f(39.32 + posX3, 6.23 + posY3, 0.0); // A7
    glEnd();

    //bidang X
    glColor3f(0.529, 0.612, 0.392);
    glBegin(GL_POLYGON);
        glVertex3f(40.26 + posX3, 6.85 + posY3, 0.0); // G7
        glVertex3f(39.63 + posX3, 6.75 + posY3, 0.0); // F7
        glVertex3f(40.07 + posX3, 7.45 + posY3, 0.0); // J7
        glVertex3f(40.36 + posX3, 7.75 + posY3, 0.0); // M7
    glEnd();

    //bidang W
    glColor3f(0.553, 0.659, 0.494);
    glBegin(GL_POLYGON);
        glVertex3f(40.07 + posX3, 7.45 + posY3, 0.0); // J7
        glVertex3f(40.36 + posX3, 7.75 + posY3, 0.0); // M7
        glVertex3f(40.15 + posX3, 8.39 + posY3, 0.0); // K7
    glEnd();

    //bidang v
    glColor3f(0.631, 0.69, 0.482);
    glBegin(GL_POLYGON);
        glVertex3f(40.07 + posX3, 7.45 + posY3, 0.0); // J7
        glVertex3f(40.15 + posX3, 8.39 + posY3, 0.0); // K7
        glVertex3f(39.91 + posX3, 7.85 + posY3, 0.0); // L7
    glEnd();

    //bidang U
    glColor3f(0.635, 0.694, 0.486);
    glBegin(GL_POLYGON);
        glVertex3f(40.07 + posX3, 7.45 + posY3, 0.0); // J7
        glVertex3f(39.91 + posX3, 7.85 + posY3, 0.0); // L7
        glVertex3f(39.56 + posX3, 7.4 + posY3, 0.0); // H7
        glVertex3f(39.55 + posX3, 6.8 + posY3, 0.0); // I7
    glEnd();

    //bidang T
    glColor3f(0.529, 0.62, 0.4);
    glBegin(GL_POLYGON);
        glVertex3f(39.55 + posX3, 6.8 + posY3, 0.0); // I7
        glVertex3f(39.56 + posX3, 7.4 + posY3, 0.0); // H7
        glVertex3f(39.03 + posX3, 7.05 + posY3, 0.0); // W6
        glVertex3f(39.0 + posX3, 6.2 + posY3, 0.0); // Z6
    glEnd();

    //bidang S
    glColor3f(0.706, 0.69, 0.592);
    glBegin(GL_POLYGON);
        glVertex3f(39.0 + posX3, 6.2 + posY3, 0.0); // Z6
        glVertex3f(39.03 + posX3, 7.05 + posY3, 0.0); // W6
        glVertex3f(38.57 + posX3, 6.84 + posY3, 0.0); // V6
        glVertex3f(38.55 + posX3, 6.25 + posY3, 0.0); // U6
        glVertex3f(38.36 + posX3, 5.85 + posY3, 0.0); // T6
    glEnd();

// BUNGA END
}

void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    //glColor3f (1.0, 1.0, 0.0);
    glLineWidth(3.0);
    glLoadIdentity();

    glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f);
    glScalef(scaleFactor, scaleFactor, 1.0f);

    mesinCuci();
    diamond();
    pinguin();
    bunga();

    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glFlush ();

}


void inputan(unsigned char key, int x, int y)
{
    // mesin cuci
    cout << key;
    if (key == 'd' || key == 'D')
    {
        posX += 0.2;
        cout << posX << endl;
        display();
    }
    if (key == 'a' || key == 'A')
    {
        posX -= 0.2;
        cout << posX << endl;
        display();
    }

    if (key == 'w' || key == 'W')
    {
        posY += 0.2;
        cout << posY << endl;
        display();
    }
    if (key == 's' || key == 'S')
    {
        posY -= 0.2;
        cout << posY << endl;
        display();
    }

    // diamond
    cout << key;
    if (key == 'h' || key == 'H')
    {
        posX1 += 0.2;
        cout << posX1 << endl;
        display();
    }
    if (key == 'f' || key == 'F')
    {
        posX1 -= 0.2;
        cout << posX1 << endl;
        display();
    }

    if (key == 't' || key == 'T')
    {
        posY1 += 0.2;
        cout << posY1 << endl;
        display();
    }
    if (key == 'g' || key == 'G')
    {
        posY1 -= 0.2;
        cout << posY1 << endl;
        display();
    }

    // pinguin
    cout << key;
    if (key == 'l' || key == 'L')
    {
        posX2 += 0.2;
        cout << posX2 << endl;
        display();
    }
    if (key == 'j' || key == 'J')
    {
        posX2 -= 0.2;
        cout << posX2 << endl;
        display();
    }

    if (key == 'i' || key == 'I')
    {
        posY2 += 0.2;
        cout << posY2 << endl;
        display();
    }
    if (key == 'k' || key == 'K')
    {
        posY2 -= 0.2;
        cout << posY2 << endl;
        display();
    }

    // bunga
    cout << key;
    if (key == '6' || key == '^')
    {
        posX3 += 0.2;
        cout << posX3 << endl;
        display();
    }
    if (key == '4' || key == '$')
    {
        posX3 -= 0.2;
        cout << posX3 << endl;
        display();
    }

    if (key == '8' || key == '*')
    {
        posY3 += 0.2;
        cout << posY3 << endl;
        display();
    }
    if (key == '2' || key == '@')
    {
        posY3 -= 0.2;
        cout << posY3 << endl;
        display();
    }

    // scale
    switch (key)
    {
        case 'z': // Tombol 'z' untuk memperbesar objek
            scaleFactor += 0.1f;
            break;
        case 'x': // Tombol 'x' untuk memperkecil objek
            scaleFactor -= 0.1f;
            if (scaleFactor < 0.1f)
                scaleFactor = 0.1f; // Batasi faktor skala minimum
            break;
        default:
            break;
    }

    // ROTASI
    switch (key)
    {
        case 'm': // Tombol 'm' untuk memulai rotasi objek
            glutIdleFunc([]() {
                rotationAngle += 1.0f; // Mengubah sudut putar
                glutPostRedisplay(); // Minta tampilan untuk diperbarui
            });
            break;
        case 'n': // Tombol 'n' untuk menghentikan rotasi objek
            glutIdleFunc(nullptr); // Berhenti memanggil fungsi tampilan secara terus menerus
            break;
        default:
            break;
    }


    glutPostRedisplay(); // Minta tampilan untuk diperbarui
}




int main(int argc, char *argv[])
{
    a=4;
	b=5;
	c=0.3;
	d=1;
	glutInit( & argc, argv );
	// ukuran window
    glutInitWindowSize(1200,600);
    // mengatur posisi windows
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    // membuat window
    glutCreateWindow("210411100054 SITI NUR AINI UAS");
    glLoadIdentity();
    glutDisplayFunc(display);
	glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
