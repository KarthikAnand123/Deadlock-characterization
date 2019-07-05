#include<stdlib.h>

#include<GL/glut.h>

#include<stdio.h>

#include<math.h>

#include<string.h>
#define PI 3.1415926535897932384626433832795
void main2();
void key(unsigned char key, int x, int y);
float y=550,x1=250,y2=150,x2=450,yf=255,yf1=255,xf2=200,yf2=550,xr=50,xl=300,yl=550,x11=100,y11=350,x22=400,y22=350;
int width = 650, height = 650;
int flag=0;
int Max[10][10], need[10][10], alloc[10][10], avail[10],
completed[10], request[10], sseq[10], ch1;
int p,r,i,j,k, new;
int sb;
void *font = GLUT_BITMAP_HELVETICA_12;

void *fonts[] =

{

	GLUT_BITMAP_9_BY_15, 

	GLUT_BITMAP_TIMES_ROMAN_10,

	GLUT_BITMAP_TIMES_ROMAN_24,

	GLUT_BITMAP_HELVETICA_12,

	GLUT_BITMAP_HELVETICA_10,

	GLUT_BITMAP_HELVETICA_18,

};


// INITIAL PAGE

void computer()

{	

	glColor3f(0.75, 0.85, 0.65);//keyboard

	glBegin(GL_QUADS);

	glVertex2f(55.0, 340.0);

	glVertex2f(145.0, 340.0);

	glVertex2f(150.0, 350.0);

	glVertex2f(60.0, 350.0);

	glEnd();



	glColor3f(0.75, 0.85, 0.65);//cabinet

	glBegin(GL_LINE_LOOP);

	glVertex2f(60.0, 355.0);

	glVertex2f(150.0, 355.0);

	glVertex2f(150.0, 370.0);

	glVertex2f(60.0, 370.0);

	glEnd();



	glColor3f(0.75, 0.85, 0.65);

	glBegin(GL_LINE_LOOP);

	glVertex2f(75.0, 380.0);

	glVertex2f(135, 380.0);

	glVertex2f(135.0, 430.0);

	glVertex2f(75.0, 430.0);

	glEnd();



	glColor3f(0.7, 0.8, 0.6);

	glBegin(GL_QUADS);

	glVertex2f(80.0, 385.0);

	glVertex2f(130.0, 385.0);

	glVertex2f(130.0, 425.0);

	glVertex2f(80.0, 425.0);

	glEnd();



	glColor3f(0.75, 0.85, 0.65);

	glBegin(GL_LINES);

	glVertex2f(90.0, 370.0);

	glVertex2f(90.0, 380.0);

	glVertex2f(120.0, 370.0);

	glVertex2f(120.0, 380.0);
	

	glEnd();

}
void output(int x, int y, char *string, int j)

{

	int len, i;



	glRasterPos2f(x, y);

	len = (int)strlen(string);

	for (i = 0; i < len; i++)

		glutBitmapCharacter(fonts[j], string[i]);

}
void printer()
{

glColor3f(0.25,0.3,0.0);
glBegin(GL_POLYGON);
glVertex2f(280,500);
glVertex2f(280,550);
glVertex2f(230,550);
glVertex2f(230,500);
glEnd();
glColor3f(0.2,0.1,0.0);
glBegin(GL_POLYGON);
glVertex2f(300,460);
glVertex2f(300,500);
glVertex2f(210,500);
glVertex2f(210,460);
glEnd();

}
void arrow1()
{
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(281,530);
glVertex2f(340,530);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(341,525);
glVertex2f(347,530);
glVertex2f(341,535);
glEnd();
}
void arrow2()
{
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(300,230);
glVertex2f(340,230);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(341,225);
glVertex2f(347,230);
glVertex2f(341,235);
glEnd();
}
void arrow3()
{
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(346,488);
glVertex2f(260,300);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(255,310);
glVertex2f(261,289);
glVertex2f(250,285);
glEnd();
}
void arrow4()
{
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(345,268);
glVertex2f(260,420);
glEnd();
glBegin(GL_TRIANGLES);
//glVertex2f(260,420);
glVertex2f(265,433);
//glVertex2f(260,420);
glVertex2f(258,410);
//glVertex2f(265,433);
glVertex2f(255,432);
glEnd();
}

void disk()
{
glColor3f(0.2,0.1,0.);
glBegin(GL_POLYGON);
glVertex2f(300,200);
glVertex2f(300,265);
glVertex2f(210,265);
glVertex2f(210,200);
glEnd();
glColor3f(0.75, 0.85, 0.65);
glLineWidth(4.0);
glBegin(GL_LINE_LOOP);
glVertex2f(297,230);
glVertex2f(297,255);
glVertex2f(213,255);
glVertex2f(213,230);
glEnd();
glPointSize(4.0);
glBegin(GL_POINTS);
glVertex2f(285,220);
glVertex2f(290,220);
glEnd();
}

void process1()
{
glColor3f(0.25,0.0,0.30);
glBegin(GL_POLYGON);
glVertex2f(365,490);
glVertex2f(365,555);
glVertex2f(348,555);
glVertex2f(348,490);
glEnd();
glColor3f(0.65,0.34,0.0);
glPushMatrix();
output(352, 520, (char*)"P1", 2);
glPopMatrix();

}

void process2()
{
glColor3f(0.25,0.0,0.30);
glBegin(GL_POLYGON);
glVertex2f(365,200);
glVertex2f(365,265);
glVertex2f(348,265);
glVertex2f(348,200);
glEnd();
glColor3f(0.65,0.34,0.0);
glPushMatrix();
output(352, 230, (char*)"P2", 2);
glPopMatrix();

}



void delay()
{
int i,j;
for(i=0;i<5000;i++)
for(j=0;j<5000;j++);
}

// FIRST SCREEN - FRONT PAGE

void front_page()

{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();


	glColor3f(1.0,0.0,0.0);

	output(220, 650, (char*)"JSS ACADEMY OF TECHNICAL EDUCATION", 2);

        output(180, 550, (char*)"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",2);

	output(220, 450, (char*)"A MINI PROJECT ON", 2);



	output(220, 400, (char*)"DEADLOCK CHARACTERIZATION", 2);



	output(450, 200, (char*)"By:", 3);

	output(460, 180, (char*)"KARTHIK A (1JS16CS046)", 2);

	output(460, 150, (char*)"KUMAR RAJAT(1JS16CS049)", 2);
	output(250,340,(char*)"MENU:",2);

	output(250,310, (char*)"1.What is a deadlock??", 2);
	output(250,290, (char*)"2.Necessary conditions for deadlock", 2);
	output(250, 270, (char*)"3.Bankers algorithm for deadlock detection", 2);

	output(100, 220, (char*)"UNDER THE GUIDANCE OF", 2);
          glColor3f(1.0,1.0,1.0);
	output(100, 190, (char*)"MR MAHESH KUMAR M R", 2);
	
	 glColor3f(1.0,0.0,0.0);
	output(275, 50, (char*)"Press required choice to start", 2);

	glFlush();

	glPopMatrix();

	glutSwapBuffers();

}




void output1(int x, int y, int s, int j)

{

	int len, i;



	glRasterPos2f(x, y);


		glutBitmapCharacter(fonts[j], s+'0');

}

void display()

{

	glClearColor(0.0, 0.0, 0.0, 0.0);

	glClear(GL_COLOR_BUFFER_BIT);


	front_page();

	glFlush();

	glutSwapBuffers();

}
void deadlock()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);

	glColor3f(1.0f, 1.0f, 1.0f);

	output(150, 640, (char*)"DEADLOCK IN OPERATING SYSTEM", 2);
	output(275, 50, (char*)"Press M to go back to main menu", 2);
	computer();
	delay();
	printer();
	process1();
	disk();
	process2();
	glFlush();
}
void OnMouseClick(int button, int state, int x, int y)
{
  if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) 
  { glPushMatrix();
     arrow1();
     arrow2();
	glColor3f(1,1,1);
	output(400,500,(char*)"Processes P1 and P2 are currenty holding a resource and requesting",2);
	output(400,480,(char*)"for additional resource held by the other process",2);
	output(400,460,(char*)"Hence a deadlock occurs",2);
glPopMatrix();
glFlush();
  }
if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) 
  { glPushMatrix();
     arrow3();
     arrow4();
	delay();
	glColor3f(1,1,1);
	output(100,120,(char*)"Deadlock is a situation where a set of processes are blocked because each process is holding",2);
	output(100,100,(char*)"a resource and waiting for another resource acquired by some other process",2);
glPopMatrix();
glFlush();
  }
	
}

//CHARCTERISTICS OF DEADLOCK
//hold and wait
void charinit()

{
	
	glClearColor(0.0, 0.0, 0.0,1.0);

	gluOrtho2D(0.0, 700.0, 0.0, 700.0);
}


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; 
	GLfloat twicePi = 2.0f * PI;
	
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); 
		for(i = 0; i <= triangleAmount;i++) { 
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)), 
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void mutualex()
{
//glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glColor3f(1.0,0.5,0.0);
glPointSize(100);
glBegin(GL_POINTS);
glVertex2i(200,250);
glVertex2i(400,250);
glEnd();
glColor3f(0.9,0.3,0.2);
drawFilledCircle(200,550,30);
drawFilledCircle(400,550,30);
glFlush();
glPushMatrix();
glColor3f(0.0,0.0,0.0);
output(200, 550, (char*)"P1", 2);
output(400, 550, (char*)"P2", 2);
output(200,250,(char*)"R1",2);
output(400,250,(char*)"R2",2);
glColor3f(1.0,1.0,1.0);
output(150,165,(char*)"A process holding one resource and requesting for a resource held by other process",2);
output(275, 50, (char*)"Press M to go back", 2);
glFlush();
glPopMatrix();
}
void drawar(float yf)
{
glColor3f(1.0,0.0,0.0);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(200,yf);
glVertex2i(400,yf1);
//glVertex2i(xf2,yf2);
glEnd();
glFlush();
glutSwapBuffers();
}
void drawar1(float yf1,float xf1)
{glColor3f(1.0,0.0,0.0);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(xf2,yf2);
glEnd();
glFlush();
glutSwapBuffers();

}

void drtim()
{
glutPostRedisplay();
if(yf<=520)
{
yf=yf+1.5;
drawar(yf);
}
if(yf1<=520)
{
yf1=yf1+1.5;
drawar(yf);
}
if(xf2<380 && y>340 )
{
xf2=xf2+0.55;
yf2=yf2-0.75;
drawar1(yf2,xf2);
}
}
//no premption and mutual exclusion

void nopre()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.9,0.3,0.2);
drawFilledCircle(200,350,50);
drawFilledCircle(400,350,50);
glColor3f(1.0,0.0,0.0);
output(180, 530, (char*)"P1", 2);
output(380, 530, (char*)"P2", 2);
glColor3f(1.0,1.0,1.0);
output(130,250,(char*)"Mutual Exclusion-At least one resource must be held in a non shareable mode,only one process",2);
output(130,230,(char*)"can hold the resource at a time",2);
output(130,210,(char*)"No-Preemption-Resources can be released by the process only after that process has completed its task",2);
output(275, 50, (char*)"Press M to go back", 2);
glFlush();
}
void res(int x,int y)
{
glColor3f(1.0,0.5,0.0);
glPointSize(50);
glBegin(GL_POINTS);
glVertex2i(x,350);
glEnd();
glColor3f(0.0,0.0,0.0);
output(x,y, (char*)"R1", 2);
glFlush();
glutSwapBuffers();
}
void aridle()
{glutPostRedisplay();
if(x11<200)
{
x11+=0.50;
res(x11,350);
glFlush();
}
}
void rest1()
{
glutPostRedisplay();
if(x11<400)
{
x11+=0.50;
res(x11,350);
glFlush();
}
}

void keypre(unsigned char f,int x,int y)
{
if(f=='a')
{
glutIdleFunc(rest1);
}

if(f=='m'||f=='M')
{glutHideWindow();
main2();}

}


//circular wait
void displaychar()
{
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glColor3f(0.3,0.0,0.2);
glPointSize(100);
glBegin(GL_POINTS);
glVertex2i(200,400);
glEnd();
glColor3f(0.0,0.3,0.2);
glBegin(GL_POINTS);
glVertex2i(200,300);
glEnd();
glColor3f(0.3,0.0,0.2);
glBegin(GL_POINTS);
glVertex2i(500,400);
glEnd();
glColor3f(0.0,0.3,0.2);
glBegin(GL_POINTS);
glVertex2i(500,300);
glEnd();
glColor3f(0.3,0.0,0.2);
glPointSize(100);
glBegin(GL_POINTS);
glVertex2i(300,600);
glEnd();
glColor3f(0.0,0.3,0.2);
glBegin(GL_POINTS);
glVertex2i(400,600);
glColor3f(0.3,0.0,0.2);
glPointSize(100);
glBegin(GL_POINTS);
glVertex2i(300,100);
glEnd();
glColor3f(0.0,0.3,0.2);
glBegin(GL_POINTS);
glVertex2i(400,100);
glEnd();
glColor3f(0.1,0.1,0.0);
drawFilledCircle(350,350,60);
glColor3f(0.0,0.0,0.0);
output(340, 350, (char*)"RESOURCE", 2);
glColor3f(0.0,0.0,0.5);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2i(200,400);
glVertex2i(500,400);
glVertex2i(200,300);
glVertex2i(500,300);
glVertex2i(300,600);
glVertex2i(300,100);
glVertex2i(400,600);
glVertex2i(400,100);
glEnd();
glColor3f(1.0,1.0,1.0);
output(130,155,(char*)"A set of waiting processes {P1,P2,P3,P4}",2);
output(275, 40, (char*)"Press M to go back", 2);
glPopMatrix();
glFlush();
}
void ancir(int y)
{
glColor3f(1.0,0.5,0.0);
glPointSize(50);
glBegin(GL_POINTS);
glVertex2f(300,y);
glVertex2f(x1,300);
glVertex2f(400,y2);
glVertex2f(x2,400);
glEnd();
glPushMatrix();
glColor3f(0.0,0.0,0.0);
output(300, y, (char*)"P1", 2);
output(x1, 300, (char*)"P2", 2);
output(400, y2, (char*)"P3", 2);
output(x2, 400, (char*)"P4", 2);
glFlush();
glPopMatrix();
glFlush();
glutSwapBuffers();
}
void ancir1(int x)
{
glColor3f(1.0,0.5,0.0);
glPointSize(50);
glBegin(GL_POINTS);
glVertex2f(x,300);
glEnd();
glColor3f(0.0,0.0,0.0);
output(x, 300, (char*)"P2", 2);
glFlush();
glPopMatrix();
glFlush();
glutSwapBuffers();
}
void ancir2(int y)
{
glColor3f(1.0,0.5,0.0);
glPointSize(50);
glBegin(GL_POINTS);
glVertex2f(400,y);
glEnd();
glColor3f(0.0,0.0,0.0);
output(400, y, (char*)"P3", 2);
glFlush();
glPopMatrix();
glFlush();
glutSwapBuffers();
}
void ancir3(int x)
{
glColor3f(1.0,0.5,0.0);
glPointSize(50);
glBegin(GL_POINTS);
glVertex2f(x,400);
glEnd();
glColor3f(0.0,0.0,0.0);
output(x, 400, (char*)"P4", 2);
glFlush();
glPopMatrix();
glFlush();
glutSwapBuffers();
}

void timer()
{

glutPostRedisplay();
if(y>420)
{
y-=0.43;
ancir(y);
}
if(x1<280)
{
x1+=0.15;
ancir1(x1);
}
if(y2<270)
{
y2+=0.43;
ancir2(y2);
}
if(x2>415)
{x2-=0.15;
ancir3(x2);
}
}
void timer2()
{glutPostRedisplay();
if(y>100)
{
y-=0.50;
ancir(y);
}
if(x1<500)
{
x1+=0.35;
ancir1(x1);
}
if(y2<600)
{
y2+=0.53;
ancir2(y2);
}
if(x2>200)
{x2-=0.35;
ancir3(x2);}
}


void disppg()
{

glColor3f(1.0,0.0,0.0);
glPushMatrix();
output(200, 600, (char*)"NECESSARY CONDITIONS FOR DEADLOCK TO OCCUR", 2);
output(200, 550, (char*)"1.Mutual exclusion and no preemption", 2);
output(200, 520, (char*)"2.Circular Wait", 2);
output(200, 490, (char*)"3.Hold and Wait", 2);
output(200, 460, (char*)"Press the required option", 2);
output(275, 50, (char*)"Press M to go back", 2);
glFlush();
glPopMatrix();
}
void keychar(unsigned char f,int x,int y)
{
if(f=='d')
glutIdleFunc(timer2);
if(f=='m'||f=='M')
{glutHideWindow();
main2();}
}
void keychar1(unsigned char f,int x,int y)
{
if(f=='m'||f=='M')
{glutHideWindow();
main2();}
}



void keyfr(unsigned char f,int x,int y)
{
if(f=='3')
{
	glutHideWindow();

	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);

	glutInitWindowSize(1500, 1000);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("mutualex");

	charinit();

	glutDisplayFunc(mutualex);

	glutIdleFunc(drtim);

	glutKeyboardFunc(keychar1);

}
if(f=='2')
{
	glutHideWindow();

	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);


	glutInitWindowSize(1500, 1000);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("circular wait");

	charinit();

	glutDisplayFunc(displaychar);

	glutIdleFunc(timer);
	
	glutKeyboardFunc(keychar);


}
if(f=='1')
{
	glutHideWindow();

	//glClear(GL_COLOR_BUFFER_BIT);

	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);

	glutInitWindowSize(1500, 1000);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("nopre");

	charinit();

	glutDisplayFunc(nopre);

	glutKeyboardFunc(keypre);

	glutIdleFunc(aridle);


}
if(f=='m'||f=='M')
{
glutDisplayFunc(display);
glutKeyboardFunc(key);

}

}


void main2()

{	glClear(GL_COLOR_BUFFER_BIT);
	
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowSize(1500, 1000);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("deadlock characteristics");

	charinit();

	glutDisplayFunc(disppg);

	glutKeyboardFunc(keyfr);

	glutMainLoop();

}




//BANKERS ALGORITHM


void bank()

{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	
	glPushMatrix();



	output(220, 650, (char*)"BANKERS ALGORITHM", 2);

	

        output(200, 550, (char*)"PROCESSES =",2);
	output1(300, 550, (int)p,2);
	
	output(200, 500, (char*)"RESOURCES =",2);
	output1(300, 500, (int)r,2);
	
	output(200, 450, (char*)"AVAILABLE =",2);
	output1(300, 450, (int)avail[0],2);
	output1(315, 450, (int)avail[1],2);
	output1(330, 450, (int)avail[2],2);
	


	output(130, 320, (char*)"MAX",2);
	output(350, 320, (char*)"ALLOCATION",2);
	output(530, 320, (char*)"NEED",2);
	output(350, 320, (char*)"ALLOCATION",2);
	output(100, 270, (char*)"R1",2);
	output(150,270 , (char*)"R2",2);
	output(200, 270, (char*)"R3",2);
	output(320, 270, (char*)"R1",2);
	output(370,270 , (char*)"R2",2);
	output(420, 270, (char*)"R3",2);
	output(520, 270, (char*)"R1",2);
	output(570,270 , (char*)"R2",2);
	output(620, 270, (char*)"R3",2);


	output(30, 220, (char*)"P0",2);
	output(30, 170, (char*)"P1",2);
	output(30, 120, (char*)"P2",2);
	output(30, 70, (char*)"P3",2);

	output1(100, 220, (int)Max[0][0],2);
	output1(150,220 , (int)Max[0][1],2);
	output1(200, 220, (int)Max[0][2],2);
	output1(100, 170, (int)Max[1][0],2);
	output1(150,170 , (int)Max[1][1],2);
	output1(200, 170, (int)Max[1][2],2);
	output1(100, 120, (int)Max[2][0],2);
	output1(150,120 , (int)Max[2][1],2);
	output1(200, 120, (int)Max[2][2],2);
	output1(100, 70, (int)Max[3][0],2);
	output1(150,70 , (int)Max[3][1],2);
	output1(200, 70, (int)Max[3][2],2);

	output1(320, 220, (int)alloc[0][0],2);
	output1(370,220 , (int)alloc[0][1],2);
	output1(420, 220, (int)alloc[0][2],2);
	output1(320, 170, (int)alloc[1][0],2);
	output1(370,170 , (int)alloc[1][1],2);
	output1(420, 170, (int)alloc[1][2],2);
	output1(320, 120, (int)alloc[2][0],2);
	output1(370,120 , (int)alloc[2][1],2);
	output1(420, 120, (int)alloc[2][2],2);
	output1(320, 70, (int)alloc[3][0],2);
	output1(370,70 , (int)alloc[3][1],2);
	output1(420, 70, (int)alloc[3][2],2);
	
	for(i=0;i<p;i++)
	{for(j=0;j<r;j++)
	{need[i][j]=Max[i][j]-alloc[i][j];}
	}



	glFlush();

	//glCallList(10);

	glPopMatrix();

	glutSwapBuffers();

}

void keyfunc(unsigned char f,int x,int y)
{if(f=='1')
	{glPushMatrix();
	output1(520, 220, (int)need[0][0],2);
	output1(570,220 , (int)need[0][1],2);
	output1(620, 220, (int)need[0][2],2);
	glPopMatrix();
glFlush();}
if(f=='2')
{glPushMatrix();
	output1(520, 170, (int)need[1][0],2);
	output1(570,170 , (int)need[1][1],2);
	output1(620, 170, (int)need[1][2],2);
glPopMatrix();
glFlush();
}
if(f=='3')
{glPushMatrix();
	output1(520, 120, (int)need[2][0],2);
	output1(570,120 , (int)need[2][1],2);
	output1(620, 120, (int)need[2][2],2);
glPopMatrix();
glFlush();
}
if(f=='4')
{glPushMatrix();
	output1(520, 70, (int)need[3][0],2);
	output1(570,70 , (int)need[3][1],2);
	output1(620, 70, (int)need[3][2],2);

glPopMatrix();
glFlush();
}
if(f=='r' || f=='R')
{
glPushMatrix();
output(500, 500,(char*)"The system is in the safe state",2);
	output(500,470 , (char*)"P1",2);
	output(515, 470,(char*)"P3",2);
	output(530, 470,(char*)"P0",2);
	output(545, 470,(char*)"P2",2);
glFlush();
glPopMatrix();


}
}

void drawtable()
{

//glColor3f(1.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2i(10,50);
glVertex2i(650,50);
glVertex2i(650,350);
glVertex2i(10,350);
glEnd();
glBegin(GL_LINES);
glVertex2i(70,50);
glVertex2i(70,350);
glEnd();
glBegin(GL_LINES);
glVertex2i(270,50);
glVertex2i(270,350);
glEnd();
glBegin(GL_LINES);
glVertex2i(470,50);
glVertex2i(470,350);
glEnd();
glBegin(GL_LINES);
glVertex2i(10,300);
glVertex2i(650,300);
glEnd();
glBegin(GL_LINES);
glVertex2i(10,250);
glVertex2i(650,250);
glEnd();
glBegin(GL_LINES);
glVertex2i(10,200);
glVertex2i(650,200);
glEnd();
glBegin(GL_LINES);
glVertex2i(10,150);
glVertex2i(650,150);
glEnd();
glBegin(GL_LINES);
glVertex2i(10,100);
glVertex2i(650,100);
glEnd();

}

void bankers()

{

	glClear(GL_COLOR_BUFFER_BIT);
	
	glClearColor(0.0, 0.0, 0.6, 0.0);
	bank();
	drawtable();
	glFlush();

	glutSwapBuffers();
}

void myinit()

{

	glColor3f(0.0, 0.8, 0.5);

	glPointSize(1.0);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	gluOrtho2D(0.0, 700.0, 0.0, 700.0);

}
int main1()
{
//glutInit(&argc,argv);
printf("Enter the no of processes :");
scanf("%d", &p);

printf("Enter the no of resources :");
scanf("%d", &r);
printf("Enter the Max matrix for each process:\n");
for(i=0; i<p;i++)
{
printf("For process %d :", i+1);
for(j=0;j<r;j++)
scanf("%d", &Max[i][j]);
}
printf("Enter the allocation for each process :\n");
for(i=0;i<p;i++)
{
printf("For process %d :", i+1);
for(j=0; j<r;j++)
scanf("%d", &alloc[i][j]);
}
printf("Enter the available Resources :\n");
for(i=0;i<r; i++)
scanf("%d",&avail[i]);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(1000, 700);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("bankers");

	glutDisplayFunc(bankers);
	
	myinit();
	glutKeyboardFunc(keyfunc);
	
	


	//glutMainLoop();

}

//CONTROLS SECTION
void init()

{

	glColor3f(1.0, 0.0, 0.0);

	glPointSize(1.0);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	gluOrtho2D(0.0, 700.0, 0.0, 700.0);

}
void key(unsigned char key, int x, int y)

{

	switch (key) {


	case '1':glutDisplayFunc(deadlock);

		break;
	case 'M':

	case 'm':glutDisplayFunc(display);

		break;
	
	case '3':{
		glutHideWindow();
		main1();
	        }
		break;
	case '2':{glutHideWindow();
		main2();
		}
		break;



	case 'q':

	case 'Q':

		exit(0);

	}

	glutPostRedisplay();

}



void main(int argc,char **argv)

{

	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(1000, 700);

	glutInitWindowPosition(0, 0);

	sb=glutCreateWindow("DEADLOCK");

	
	glutKeyboardFunc(key);
	glutMouseFunc(OnMouseClick);

	
	init();

	glutDisplayFunc(display);


	glutMainLoop();

}
