#include <GL/glut.h>///18 �ϥ�GLUT�~��
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc,char *argv[])///138 main()�禡
{
 glutInit(&argc, argv);///140�}��GLUT�\��
 glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143�]�w��ܼҦ�
 glutCreateWindow("GLUT Shapes");///145�}��GLUT����
 glutDisplayFunc(display);///148displat�禡
 glutMainLoop();///174�j��
}
