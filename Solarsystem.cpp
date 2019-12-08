#include<stdio.h>
#include<stdlib.h> 
#include<glut.h> 
#include<math.h>
staticint m=0,M=0,v=0,V=0,E=0,e=0,r=0,R=0,j=0,J=0,s=0,S=0,U=0,u=0,n=0,N=0,z=0,b=0;
static GLint axis=2;
GLfloat diffuseMaterial[4]={0.5,0.5,0.5,1.0};
/*initialize material property,light soure,lighting model,and depth buffer*/ void myinit(void)
{
glClearColor(0.0,0.0,0.0,0.0); glShadeModel(GL_SMOOTH); glEnable(GL_DEPTH_TEST);
GLfloat mat_specular[]={1.0,1.0,1.0,1.0}; GLfloat light_position[]={1.0,1.0,1.0,0.0};
glMaterialfv(GL_FRONT,GL_DIFFUSE,diffuseMaterial); glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular); glMaterialf(GL_FRONT,GL_SHININESS,25.0); glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0); glLightfv(GL_LIGHT0,GL_POSITION,light_position); glColorMaterial(GL_FRONT,GL_DIFFUSE); glEnable(GL_COLOR_MATERIAL);
}
void display(void)
{
GLfloat position[]={0.0,0.0,1.5,1.0}; glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); glColor3f(1.0,0.85,0.0);
glPushMatrix();
 
glRotatef((GLfloat)z,1.0,1.0,1.0); glLightfv(GL_LIGHT0,GL_POSITION,position); glDisable(GL_LIGHTING); glutSolidSphere(0.8,40,16); /*draw sun*/ glPopMatrix();
glPushMatrix(); glRotatef((GLfloat)M,0.0,1.0,0.0);
glTranslatef(1.5,0.0,0.0);
glRotatef((GLfloat)m,0.0,1.0,0.0);
glColor3f(1.0,0.0,0.0);
glutSolidSphere(0.2,20,8); /*draw smaller planet mercury*/ glPopMatrix();
glPushMatrix(); glRotatef((GLfloat)V,0.0,1.0,0.0);
glTranslatef(2.0,0.0,1.0);
glRotatef((GLfloat)v,0.0,1.0,0.0);
glColor3f(7.5,9.5,1.0);
glutSolidSphere(0.2,20,8); /*draw smaller plant venus*/ glPopMatrix();
glPushMatrix(); glRotatef((GLfloat)E,0.0,1.0,0.0);
glTranslatef(3.5,0.0,0.0);
glRotatef((GLfloat)e,0.0,1.0,0.0);
glColor3f(0.1,6.5,2.0);
glutSolidSphere(0.2,20,8); /*draw smaller plant earth*/ glPopMatrix();
glPushMatrix(); glRotatef((GLfloat)R,0.0,1.0,0.0);
glTranslatef(5.0,0.0,3.0);
glRotatef((GLfloat)r,0.0,1.0,0.0);
glColor3f(1.0,0.2,0.0);
 
glutSolidSphere(0.2,20,8); /*draw smaller planet mars*/ glPopMatrix();
glPushMatrix(); glRotatef((GLfloat)J,0.0,1.0,0.0);
glTranslatef(-2.5,0.0,1.0);
glRotatef((GLfloat)j,0.0,1.0,0.0);
glColor3f(0.9,0.7,0.3);
glutSolidSphere(0.2,20,8);/*draw smaller planet Jupiter*/ glPopMatrix();
glPushMatrix(); glEnable(GL_LIGHTING); glRotatef((GLfloat)S,0.0,1.0,0.0);
glTranslatef(-5.0,0.0,0.0); gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)s,0.0,0.0,5.0);
glColor3f(4.5,0.5,0.0);
glutSolidSphere(0.5,20,16); /*draw smaller plant Saturn*/ int i=0;
glBegin(GL_QUAD_STRIP); for(i=0;i<=360;i++)
{
glVertex3f(sin(i*3.1416/180)*0.5,cos(i*3.1416/180)*0.5,0); glVertex3f(sin(i*3.1416/180)*0.7,cos(i*3.1416/180)*0.7,0);
}
glEnd(); glPopMatrix(); glPushMatrix();
glRotatef ((GLfloat) U, 0.0, 1.0,0.0);
glTranslatef (-6.5, 0.0, 0.0);
gluLookAt (10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 1.0);
glRotatef((GLfloat) u, 0.0, 0.0, 5.0);
 
glColor3f( 1.2, 0.6,0.2);
glutSolidSphere (0.5, 20, 16); /* draw smaller planet Uranus*/ glPopMatrix();
glPushMatrix();
glRotatef ((GLfloat) N,0.0, 1.0, 0.0);
glTranslatef (-8.0, 0.0, 0.0);
glRotatef ((GLfloat) n, 0.0, 1.0, 0.0);
glColor3f(0.0,100.0,0.0);
glutSolidSphere(0.4, 20, 8);
glPopMatrix();/* draw smaller planet Neptune */ glutSwapBuffers();
}
void stars()
{
glPushMatrix(); glTranslatef(-9.0,3.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.07,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(9.0,-5.9,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.1,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(6.5,8.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
 
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.1,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(5.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.1,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(-9.0,6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.1,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(-10.5,9.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.07,20,8); glPopMatrix(); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(0.9,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
 
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(1.0,6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(0.8,-5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(3.0,-7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.05,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(1.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix();
 
glPushMatrix(); glTranslatef(2.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(0.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.05,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(0.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(-9.0,0.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.05,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(-10.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
 
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(9.0,3.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.05,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(-10.0,-6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix(); glPushMatrix(); glTranslatef(2.0,2.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0); glutSolidSphere(0.04,20,8); glPopMatrix();
glFlush(); glutSwapBuffers();
}
void reshape(int w,int h)
{
 
glViewport(0,0,(GLsizei)w,(GLsizei)h); glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluPerspective(60.0,(GLfloat)w/(GLfloat)h,1.0,20.0); glMatrixMode(GL_MODELVIEW); glLoadIdentity(); gluLookAt(0.0,0.0,5.0,0.0,0.0,0.0,0.0,1.0,0.0);
}


void keyboard(unsignedchar key,int x,int y)
{
switch(key)
{
case't':glutIdleFunc(stars);
break; case'T':glutIdleFunc(stars);
break; case'm':m=(m+3)%360;
break; case'M':M=(M+12)%360;
glutIdleFunc(display); break;
case'v':v=(v+2)%360;
break; case'V':V=(V+10)%360;
glutIdleFunc(display); break;
case'e':e=(e+5)%360;
break; case'E':E=(E+8)%360;
 
glutIdleFunc(display); break;
case'r':r=(r+6)%360;
break; case'R':R=(R+6)%360;
glutIdleFunc(display); break;
case'j':j=(j+10)%360;
break; case'J':J=(J+4)%360;
glutIdleFunc(display); break;
case's':s=(s+9)%360;
break; case'S':S=(S+3)%360;
glutIdleFunc(display); break;
case'u':u=(u+8)%360;
break; case'U':U=(U+2)%360;
glutIdleFunc(display); break;
case'n':n=(n+7)%360;
break; case'N':N=(N+1)%360;
glutIdleFunc(display); break;

case'a':z=(z+50)%360;
m=(m+3)%360; v=(v+2)%360;
 
e=(e+5)%360; r=(r+6)%360; j=(j+10)%360; s=(s+9)%360; u=(u+8)%360; n=(n+7)%360;
break;


case'A':z=(z+50)%360;
M=(M+12)%360; V=(V+10)%360; E=(E+8)%360; R=(R+6)%360; J=(J+4)%360; S=(S+3)%360; U=(U+2)%360; N=(N+1)%360;
glutIdleFunc(display); break;

 
case'0':exit(0);


default:break;
}
 

break;
 
glutPostRedisplay();
}


void mouse(int btn ,int state,int x,int y)
{
if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
{
 
m=(m+3)%360;M=(M+12)%360; v=(v+2)%360;V=(V+10)%360; e=(e+5)%360;E=(E+8)%360; r=(r+6)%360;R=(R+6)%360; j=(j+10)%360;J=(J+4)%360; s=(s+9)%360;S=(S+3)%360; u=(u+8)%360;U=(U+2)%360; n=(n+7)%360;N=(N+1)%360;
glutPostRedisplay();
}
if(btn==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN)
{
m=(m+3)%360;M=(M+12)%360; v=(v-2)%360;V=(V-10)%360; e=(e+5)%360;E=(E+8)%360; r=(r-6)%360;R=(R-6)%360; j=(j+10)%360;J=(J+4)%360;
s=(s-9)%360;S=(S-3)%360; u=(u+8)%360;U=(U+2)%360; n=(n-7)%360;N=(N-1)%360;
glutPostRedisplay();
}
if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
{
m=(m-3)%360;M=(M-12)%360;
v=(v-2)%360;V=(V-10)%360;
e=(e-5)%360;E=(E-8)%360;
r=(r-6)%360;R=(R-6)%360;
j=(j-10)%360;J=(J-4)%360;
s=(s-9)%360;S=(S-3)%360;
u=(u-8)%360;U=(U-2)%360;
 
n=(n-7)%360;N=(N-1)%360;
glutPostRedisplay();
}
}


int main(int argc,char **argv)
{
glutInit(&argc,argv); glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH); glutInitWindowSize(1000,1000);
glutInitWindowPosition(100,100); glutCreateWindow("SOLAR SYSTEM"); myinit();
glutDisplayFunc(display); glutReshapeFunc(reshape); glutKeyboardFunc(keyboard); glutMouseFunc(mouse); glEnable(GL_DEPTH_TEST); glutMainLoop();
return 0;
}
