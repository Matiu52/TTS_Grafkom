#define _USE_MATH_DEFINES
#include <iostream>
#include <GL/freeglut.h>

int  y = 160;

void motif1(int x) {
	glBegin(GL_POLYGON);
	glVertex2d(54 + x, 90);//2
	glVertex2d(70 + x, 106);//4
	glVertex2d(90 + x, 106);//6
	glVertex2d(106 + x, 90);//8
	glVertex2d(106 + x, 70);//10
	glVertex2d(90 + x, 54);//12
	glVertex2d(70 + x, 54);//14
	glVertex2d(54 + x, 70);//16
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(0 + x, 80);//1
	glVertex2d(54 + x, 90);//2
	glVertex2d(54 + x, 70);//16
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2d(54 + x, 90);//2
	glVertex2d(25 + x, 135);//3
	glVertex2d(70 + x, 106);//4
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2d(70 + x, 106);//4
	glVertex2d(80 + x, 160);//5
	glVertex2d(90 + x, 106);//6
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(90 + x, 106);//6
	glVertex2d(135 + x, 135);//7
	glVertex2d(106 + x, 90);//8
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(106 + x, 90);//8
	glVertex2d(160 + x, 80);//9
	glVertex2d(106 + x, 70);//10
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(106 + x, 70);//10
	glVertex2d(135 + x, 25);//11
	glVertex2d(90 + x, 54);//12
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(90 + x, 54);//12
	glVertex2d(80 + x, 0);//13
	glVertex2d(70 + x, 54);//14
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(70 + x, 54);//14
	glVertex2d(25 + x, 25);//15
	glVertex2d(54 + x, 70);//16
	glEnd();
}

void motif2(int x) {
	glBegin(GL_POLYGON);
	glVertex2d(54 + x, 90 + y);//2
	glVertex2d(70 + x, 106 + y);//4
	glVertex2d(90 + x, 106 + y);//6
	glVertex2d(106 + x, 90 + y);//8
	glVertex2d(106 + x, 70 + y);//10
	glVertex2d(90 + x, 54 + y);//12
	glVertex2d(70 + x, 54 + y);//14
	glVertex2d(54 + x, 70 + y);//16
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(0 + x, 80 + y);//1
	glVertex2d(54 + x, 90 + y);//2
	glVertex2d(54 + x, 70 + y);//16
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(54 + x, 90 + y);//2
	glVertex2d(25 + x, 135 + y);//3
	glVertex2d(70 + x, 106 + y);//4
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(70 + x, 106 + y);//4
	glVertex2d(80 + x, 160 + y);//5
	glVertex2d(90 + x, 106 + y);//6
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(90 + x, 106 + y);//6
	glVertex2d(135 + x, 135 + y);//7
	glVertex2d(106 + x, 90 + y);//8
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(106 + x, 90 + y);//8
	glVertex2d(160 + x, 80 + y);//9
	glVertex2d(106 + x, 70 + y);//10
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(106 + x, 70 + y);//10
	glVertex2d(135 + x, 25 + y);//11
	glVertex2d(90 + x, 54 + y);//12
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(90 + x, 54 + y);//12
	glVertex2d(80 + x, 0 + y);//13
	glVertex2d(70 + x, 54 + y);//14
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(70 + x, 54 + y);//14
	glVertex2d(25 + x, 25 + y);//15
	glVertex2d(54 + x, 70 + y);//16
	glEnd();
}

void motif3(int x) {
	glBegin(GL_POLYGON);
	glVertex2d(54 + x, 90 + 2 * y);//2
	glVertex2d(70 + x, 106 + 2 * y);//4
	glVertex2d(90 + x, 106 + 2 * y);//6
	glVertex2d(106 + x, 90 + 2 * y);//8
	glVertex2d(106 + x, 70 + 2 * y);//10
	glVertex2d(90 + x, 54 + 2 * y);//12
	glVertex2d(70 + x, 54 + 2 * y);//14
	glVertex2d(54 + x, 70 + 2 * y);//16
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(0 + x, 80 + 2 * y);//1
	glVertex2d(54 + x, 90 + 2 * y);//2
	glVertex2d(54 + x, 70 + 2 * y);//16
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(54 + x, 90 + 2 * y);//2
	glVertex2d(25 + x, 135 + 2 * y);//3
	glVertex2d(70 + x, 106 + 2 * y);//4
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(70 + x, 106 + 2 * y);//4
	glVertex2d(80 + x, 160 + 2 * y);//5
	glVertex2d(90 + x, 106 + 2 * y);//6
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(90 + x, 106 + 2 * y);//6
	glVertex2d(135 + x, 135 + 2 * y);//7
	glVertex2d(106 + x, 90 + 2 * y);//8
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(106 + x, 90 + 2 * y);//8
	glVertex2d(160 + x, 80 + 2 * y);//9
	glVertex2d(106 + x, 70 + 2 * y);//10
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(106 + x, 70 + 2 * y);//10
	glVertex2d(135 + x, 25 + 2 * y);//11
	glVertex2d(90 + x, 54 + 2 * y);//12
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(90 + x, 54 + 2 * y);//12
	glVertex2d(80 + x, 0 + 2 * y);//13
	glVertex2d(70 + x, 54 + 2 * y);//14
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(70 + x, 54 + 2 * y);//14
	glVertex2d(25 + x, 25 + 2 * y);//15
	glVertex2d(54 + x, 70 + 2 * y);//16
	glEnd();
}

void lingkaran(int radius, int jumlah_titik, int x_tengah, int y_tengah) {
	glLineWidth(2);
	if (jumlah_titik > 20) {
		glBegin(GL_LINE_LOOP);
	}
	else if (radius < 10 && jumlah_titik !=3) {
		glBegin(GL_POLYGON);
	}
	else {
		glBegin(GL_POINTS);
	}
	for (int i = 0; i <= 360; i++) {
		float sudut = i * (2 * 3.14 / jumlah_titik);
		float x = x_tengah + radius * cos(sudut);
		float y = y_tengah + radius * sin(sudut);
		glVertex2f(x, y);
	}
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(239.f / 255.f, 173.f / 255.f, 67.f / 255.f);
	for (int i = 0; i <= 640; i += 160) {
		motif1(i);
		motif2(i);
		motif3(i);
	}
	glColor3f(0, 0, 0);
	for (int j = 80; j <= 640; j += 160) {
		lingkaran(10.5, 30, j, 80);
		lingkaran(10.5, 30, j, 240);
		lingkaran(10.5, 30, j, 400);
	}
	glColor3f(1, 1, 1);
	for (int k = 0; k <= 640; k += 160) {
		lingkaran(9, 20, k, 0);
		lingkaran(9, 20, k, 160);
		lingkaran(9, 20, k, 320);
		lingkaran(9, 20, k, 480);

		lingkaran(15, 20, k, 0);
		lingkaran(15, 20, k, 160);
		lingkaran(15, 20, k, 320);
		lingkaran(15, 20, k, 480);

		lingkaran(5, 3, k + 50, 0);
		lingkaran(5, 3, k + 50, 160);
		lingkaran(5, 3, k + 50, 320);
		lingkaran(5, 3, k + 50, 480);

		lingkaran(5, 3, k - 50, 0);
		lingkaran(5, 3, k - 50, 160);
		lingkaran(5, 3, k - 50, 320);
		lingkaran(5, 3, k - 50, 480);

		lingkaran(5, 3, 0, k + 50);
		lingkaran(5, 3, 160, k + 50);
		lingkaran(5, 3, 320, k + 50);
		lingkaran(5, 3, 480, k + 50);
		
		lingkaran(5, 3, 0, k - 50);
		lingkaran(5, 3, 160, k - 50);
		lingkaran(5, 3, 320, k - 50);
		lingkaran(5, 3, 480, k - 50);

	}
	glFlush();
}

void myinit() {

	glClearColor(10.f / 255.f , 25.f / 255.f, 40.f / 255.f, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 640, 0, 480);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("TTS Grafkom H | Matius Andreatna | 672018239");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}