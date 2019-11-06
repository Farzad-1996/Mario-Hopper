/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int m_x = 0, m_y = 0;



/*
	function iDraw() is called again and again by the system.
*/
int rad = 50;
void drawCar(double x, double y){
	iFilledRectangle(x,y,100,40);
}


double v_x = 0,v_y = 30;

int main_x=15;
int main_y=15;

void main_character()
{
	iRectangle(main_x,main_y,30,30);
	iLine(main_x,main_y,main_x,0);
	iLine(main_x+30,main_y,main_x+30,0);
	iLine(main_x,main_y+30,main_x-10,main_y+10);
	iLine(main_x+30,main_y+30,main_x+10,main_y+10);
	iCircle(main_x+15,main_y+45,15,100);

}

void iDraw()
{
	iClear();
	main_character();
	
	
	

}



/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	printf("Button Number %d %d\n", button,state);
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iPassiveMouseMove is called when user hovers the mouse pointer in the screen
	(mx,my) is the coordinate of mouse pointer
*/
void iPassiveMouseMove(int mx,int my){
	//printf("%d %d\n",mx,my);
	m_x = mx;
	m_y = my;
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	if((key == GLUT_KEY_DOWN)||(key == GLUT_KEY_PAGE_DOWN))
	{
		

	}
	if((key == GLUT_KEY_UP)||(key == GLUT_KEY_PAGE_UP))
	{

	}
	if(key == GLUT_KEY_LEFT)
	{
		main_x-=10;
	}
	if(key == GLUT_KEY_RIGHT)
	{
		main_x+=10;
	}
	//place your codes for other keys here
}

int main()
{
	iInitialize(1366, 768, "demooo");
	return 0;
}
