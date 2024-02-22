#include <GL/glut.h>///18 使用GLUT外掛
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc,char *argv[])///138 main()函式
{
 glutInit(&argc, argv);///140開啟GLUT功能
 glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143設定顯示模式
 glutCreateWindow("GLUT Shapes");///145開啟GLUT視窗
 glutDisplayFunc(display);///148displat函式
 glutMainLoop();///174迴圈
}
