/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <ctype.h>



struct showScore{

	int in_score;
	char in_name[100];

} show_score[10000], temp_struct;

/*
	function iDraw() is called again and again by the system.
*/
int m_x=0;
int m_y=0;

double score_menu_call = 10;

long long main_x=15;
long long main_y=0+300;

int dd=0;

int main_x1=400;
int main_y1=400;

char string_name[100];



void main_character()
{
	iSetColor(0,0,0);
	iFilledRectangle(main_x+56,main_y+96,8,16);
	iFilledRectangle(main_x+56,main_y+80,32,8);
	iSetColor(255,255,0);
	iFilledRectangle(main_x+32,main_y+40,8,8);
	iFilledRectangle(main_x+56,main_y+40,8,8);
	iSetColor(153,76,0);
	iFilledRectangle(main_x,main_y,32,8);
	iFilledRectangle(main_x+8,main_y+8,24,8);
	iFilledRectangle(main_x+64,main_y,32,8);
	iFilledRectangle(main_x+64,main_y+8,24,8);
	iFilledRectangle(main_x+8,main_y+80,16,8);
	iFilledRectangle(main_x+8,main_y+88,32,8);
	iFilledRectangle(main_x+8,main_y+96,24,8);
	iFilledRectangle(main_x+16,main_y+104,24,8);
	iSetColor(255,51,51);
	iFilledRectangle(main_x+16,main_y+112,72,8);
	iFilledRectangle(main_x+24,main_y+120,48,8);
	iFilledRectangle(main_x+16,main_y+64,16,8);
	iFilledRectangle(main_x+40,main_y+64,24,8);
	iFilledRectangle(main_x+40,main_y+56,16,8);
	iFilledRectangle(main_x+64,main_y+56,24,8);
	iFilledRectangle(main_x+64,main_y+48,32,8);
	iFilledRectangle(main_x+72,main_y+40,8,8);
	iFilledRectangle(main_x+16,main_y+40,8,8);
	iFilledRectangle(main_x+8,main_y+56,24,8);
	iFilledRectangle(main_x,main_y+48,32,8);
	iSetColor(255,178,102);
	iFilledRectangle(main_x+40,main_y+104,16,8);
	iFilledRectangle(main_x+64,main_y+104,8,8);
	iFilledRectangle(main_x+64,main_y+96,16,8);
	iFilledRectangle(main_x+32,main_y+96,24,8);
	iFilledRectangle(main_x+40,main_y+88,56,8);
	iFilledRectangle(main_x+24,main_y+80,32,8);
	iFilledRectangle(main_x+24,main_y+72,56,8);
	iFilledRectangle(main_x,main_y+24,16,8);
	iFilledRectangle(main_x,main_y+32,24,8);
	iFilledRectangle(main_x,main_y+40,16,8);
	iFilledRectangle(main_x,main_y+24,16,8);
	iFilledRectangle(main_x+80,main_y+24,16,8);
	iFilledRectangle(main_x+72,main_y+32,24,8);
	iFilledRectangle(main_x+80,main_y+40,16,8);
	iSetColor(102,178,255);
	iFilledRectangle(main_x+32,main_y+64,8,8);
	iFilledRectangle(main_x+32,main_y+56,8,8);
	iFilledRectangle(main_x+56,main_y+56,8,8);
	iFilledRectangle(main_x+32,main_y+48,32,8);
	iFilledRectangle(main_x+24,main_y+40,8,8);
	iFilledRectangle(main_x+24,main_y+32,48,8);
	iFilledRectangle(main_x+40,main_y+40,16,8);
	iFilledRectangle(main_x+64,main_y+40,8,8);
	iFilledRectangle(main_x+24,main_y+32,48,8);
	iFilledRectangle(main_x+16,main_y+24,64,8);
	iFilledRectangle(main_x+8,main_y+16,32,8);
	iFilledRectangle(main_x+56,main_y+16,32,8);

}


int box1x=2560;
int box2x=2560;
int tir_x=0;
int tir_y=main_y;

int life_x= 2100;
int life_y= 1300;

void life_meter()
{
	iSetColor(255,51,51);
	iFilledRectangle(life_x, life_y, 16, 76);
	iFilledRectangle(life_x+20, life_y, 16, 58);
	iFilledRectangle(life_x+40, life_y, 16, 50);
	iFilledRectangle(life_x+60, life_y, 16, 32);
	
}
void life_meter1()
{
	iSetColor(255,51,51);
	iFilledRectangle(life_x+20, life_y, 16, 58);
	iFilledRectangle(life_x+40, life_y, 16, 50);
	iFilledRectangle(life_x+60, life_y, 16, 32);
	
	
}
void life_meter2()
{
	iSetColor(255,51,51);
	iFilledRectangle(life_x+40, life_y, 16, 50);
	iFilledRectangle(life_x+60, life_y, 16, 32);
}
void life_meter3()
{
	iSetColor(255,51,51);
	iFilledRectangle(life_x+60, life_y, 16, 32);
	
}



bool intro_menu=true , main_menu=false , in_game=false , level3=false , tir_true=false , jump , game_over = false , show_score_menu=false;
bool show_life_meter = true , show_life_meter3 = true ,show_life_meter2 = true ,show_life_meter1 = true;
bool is_hit = false;

//int rect_1x=2560;
int circle_1x=2660+2560;
int rect_2x=2*2660+2560;
int circle_2x=3*2660+2560;
int mush_x= 2560;
int mush_y=300;




void mushroom()
{	iSetColor(255,255,153);
	iFilledRectangle(mush_x, mush_y, 40, 20);
	iFilledRectangle(mush_x-4, mush_y+4, 8, 4);
	iFilledRectangle(mush_x-4, mush_y+8, 4, 4);
	iFilledRectangle(mush_x-8, mush_y+8, 4, 8);
	iFilledRectangle(mush_x-8, mush_y+12, 8, 4);
	iFilledRectangle(mush_x-8, mush_y+12, 8, 4);
	iFilledRectangle(mush_x+36, mush_y+4, 8, 4);
	iFilledRectangle(mush_x+40, mush_y+8, 8, 8);
	iSetColor(255,0,0);
	iFilledRectangle(mush_x-12, mush_y+16, 16, 4);
	iFilledRectangle(mush_x+36, mush_y+16, 16, 4);
	iFilledRectangle(mush_x, mush_y+20, 40, 4);
	iFilledRectangle(mush_x+12, mush_y+12, 4, 8);
	iFilledRectangle(mush_x+24, mush_y+12, 4, 8);
	iFilledRectangle(mush_x-12, mush_y+18, 4, 24);
	iFilledRectangle(mush_x+48, mush_y+18, 4, 24);
	iFilledRectangle(mush_x-8, mush_y+42, 4, 4);
	iFilledRectangle(mush_x+44, mush_y+42, 4, 4);
	iFilledRectangle(mush_x+32, mush_y+46, 12, 4);
	iFilledRectangle(mush_x-4, mush_y+46, 12, 4);
	iFilledRectangle(mush_x+4, mush_y+50, 32, 4);
	iFilledRectangle(mush_x+4, mush_y+50, 32, 4);
	iSetColor(153,204,255);
	iFilledRectangle(mush_x-8, mush_y+38, 16, 8);
	iFilledRectangle(mush_x-12, mush_y+38, 24, 4);
	iFilledRectangle(mush_x+28, mush_y+30, 24, 8);
	iFilledRectangle(mush_x+24, mush_y+28, 28, 4);
	iSetColor(255,0,0);
	iFilledRectangle(mush_x-8, mush_y+20, 12, 4);
	iFilledRectangle(mush_x+36, mush_y+20, 12, 4);
	iFilledRectangle(mush_x-8, mush_y+24, 56, 4);
	iFilledRectangle(mush_x-8, mush_y+28, 32, 4);
	iFilledRectangle(mush_x-8, mush_y+32, 40, 6);
	iFilledRectangle(mush_x+12, mush_y+38, 38, 4);
	iFilledRectangle(mush_x+8, mush_y+42, 36, 4);
	iFilledRectangle(mush_x+4, mush_y+46, 28, 4);










}

int level2_background_parameter = 10;
int cloud_parameter1 = 800;
int cloud_parameter2 = 0;
int cloud_parameter3 = 200;
int cloud_parameter4 = 1500;
int cloud_parameter5 = 2200;
int cloud_parameter6 = 200;

void level2_background()
{
	iSetColor(204,255,255);
	iFilledRectangle(0,300,2560,1140);

	iSetColor(255,255,255);
	
	iFilledEllipse(cloud_parameter1+70, 924, 160, 40);
	iFilledCircle(cloud_parameter1+86, 924, 56);
	iFilledCircle(cloud_parameter1+38, 924, 56);

	iFilledCircle(cloud_parameter1, 924, 48);
	iFilledCircle(cloud_parameter1-32, 924, 40);
	iFilledCircle(cloud_parameter1+124, 924, 56);
	iFilledCircle(cloud_parameter1+170, 924, 40);

	iFilledEllipse(cloud_parameter3+70, 1200, 160, 40);
	iFilledCircle(cloud_parameter3+86, 1200, 56);
	iFilledCircle(cloud_parameter3+38, 1200, 56);
	iFilledCircle(cloud_parameter3, 1200, 48);
	iFilledCircle(cloud_parameter3-32, 1200, 40);
	iFilledCircle(cloud_parameter3+124, 1200, 56);
	iFilledCircle(cloud_parameter3+170, 1200, 40);
	
	iFilledEllipse(cloud_parameter4+70, 1300, 160, 40);
	iFilledCircle(cloud_parameter4+86, 1300, 56);
	iFilledCircle(cloud_parameter4+38, 1300, 56);
	iFilledCircle(cloud_parameter4, 1300, 48);
	iFilledCircle(cloud_parameter4-32, 1300, 40);
	iFilledCircle(cloud_parameter4+124, 1300, 56);
	iFilledCircle(cloud_parameter4+170, 1300, 40);

	iFilledEllipse(cloud_parameter5+70, 1100, 160, 40);
	iFilledCircle(cloud_parameter5+86, 1100, 56);
	iFilledCircle(cloud_parameter5+38, 1100, 56);
	iFilledCircle(cloud_parameter5, 1100, 48);
	iFilledCircle(cloud_parameter5-32, 1100, 40);
	iFilledCircle(cloud_parameter5+124, 1100, 56);
	iFilledCircle(cloud_parameter5+170, 1100, 40);

	
	
	
	
	

	iSetColor(75,65,54);
	iFilledRectangle(0,0,2560,300);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 0,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 0,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 0,210,90,90);

	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 100,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 100,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 100,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 200,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 200,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 200,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 300,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 300,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 300,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 400,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 400,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 400,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 500,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 500,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 500,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 600,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 600,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 600,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 700,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 700,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 700,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 800,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 800,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 800,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 900,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 900,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 900,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1000,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1000,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1000,210,90,90);

	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1100,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1100,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1100,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1200,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1200,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1200,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1300,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1300,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1300,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1400,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1400,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1400,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1500,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1500,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1500,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1600,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1600,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1600,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1700,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1700,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1700,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1800,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1800,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1800,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1900,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1900,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 1900,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2000,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2000,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2000,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2100,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2100,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2100,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2200,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2200,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2200,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2300,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2300,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2300,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2400,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2400,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2400,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2500,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2500,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2500,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2600,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2600,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2600,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2700,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2700,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2700,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2800,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2800,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2800,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2900,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2900,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 2900,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3000,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3000,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3000,210,90,90);

	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3100,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3100,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3100,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3200,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3200,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3200,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3300,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3300,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3300,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3400,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3400,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3400,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3500,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3500,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3500,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3600,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3600,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3600,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3700,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3700,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3700,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3800,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3800,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3800,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3900,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3900,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 3900,210,90,90);


	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 4000,10,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 4000,110,90,90);
	iSetColor(10,20,30);
	iFilledRectangle(level2_background_parameter + 4000,210,90,90);
	//iClear();
}

int jump_parameter = 0;
float j = 1;

void cloud_control()
{
	cloud_parameter1-=1;
	cloud_parameter2-=1;
	cloud_parameter3-=1;
	cloud_parameter4-=1;
	cloud_parameter5-=1;
	//cloud_parameter6-=1;

	if(cloud_parameter1<-300)cloud_parameter1=2600;
	if(cloud_parameter2<-300)cloud_parameter2=2600;
	if(cloud_parameter3<-300)cloud_parameter3=2600;
	if(cloud_parameter4<-300)cloud_parameter4=2600;
	if(cloud_parameter5<-300)cloud_parameter5=2600;
	if(cloud_parameter6<-300)cloud_parameter6=2600;
	
}

int score_one_parameter_x = 2400;
int score_one_parameter_y = 1300;


double score = 0;

void score_show()
{
	if(show_life_meter==true)life_meter();
	if(show_life_meter1==true)life_meter1();
	if(show_life_meter2==true)life_meter2();
	if(show_life_meter3==true)life_meter3();
	int score_temp = score;
	char ar[100]="hi";
	int d = 0;
	//printf("%d",score_temp);
	iSetColor(43,132,43);
	iText(2300,1350,"SCORE",GLUT_BITMAP_HELVETICA_18);
	int temp;
	while(score_temp>=10){
		//ar[0]='0';
		temp = score_temp%10;
		score_temp/=10;
		if(temp==0)ar[d]='0';
		if(temp==1)ar[d]='1';
		if(temp==2)ar[d]='2';
		if(temp==3)ar[d]='3';
		if(temp==4)ar[d]='4';
		if(temp==5)ar[d]='5';
		if(temp==6)ar[d]='6';
		if(temp==7)ar[d]='7';
		if(temp==8)ar[d]='8';
		if(temp==9)ar[d]='9';
		d++;
	}
	if(score_temp==0)ar[d]='0';
	if(score_temp==1)ar[d]='1';
	if(score_temp==2)ar[d]='2';
	if(score_temp==3)ar[d]='3';
	if(score_temp==4)ar[d]='4';
	if(score_temp==5)ar[d]='5';
	if(score_temp==6)ar[d]='6';
	if(score_temp==7)ar[d]='7';
	if(score_temp==8)ar[d]='8';
	if(score_temp==9)ar[d]='9';
	printf("%c",ar[0]);
	
	
	if(ar[0]=='0')iText(2400,1300,"0",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='1')iText(2400,1300,"1",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='2')iText(2400,1300,"2",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='3')iText(2400,1300,"3",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='4')iText(2400,1300,"4",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='5')iText(2400,1300,"5",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='6')iText(2400,1300,"6",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='7')iText(2400,1300,"7",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='8')iText(2400,1300,"8",GLUT_BITMAP_HELVETICA_18);
	if(ar[0]=='9')iText(2400,1300,"9",GLUT_BITMAP_HELVETICA_18);
	

	if(ar[1]=='0')iText(2370,1300,"0",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='1')iText(2370,1300,"1",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='2')iText(2370,1300,"2",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='3')iText(2370,1300,"3",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='4')iText(2370,1300,"4",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='5')iText(2370,1300,"5",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='6')iText(2370,1300,"6",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='7')iText(2370,1300,"7",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='8')iText(2370,1300,"8",GLUT_BITMAP_HELVETICA_18);
	if(ar[1]=='9')iText(2370,1300,"9",GLUT_BITMAP_HELVETICA_18);

	if(ar[2]=='0')iText(2340,1300,"0",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='1')iText(2340,1300,"1",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='2')iText(2340,1300,"2",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='3')iText(2340,1300,"3",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='4')iText(2340,1300,"4",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='5')iText(2340,1300,"5",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='6')iText(2340,1300,"6",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='7')iText(2340,1300,"7",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='8')iText(2340,1300,"8",GLUT_BITMAP_HELVETICA_18);
	if(ar[2]=='9')iText(2340,1300,"9",GLUT_BITMAP_HELVETICA_18);

	if(ar[3]=='0')iText(2310,1300,"0",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='1')iText(2310,1300,"1",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='2')iText(2310,1300,"2",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='3')iText(2310,1300,"3",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='4')iText(2310,1300,"4",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='5')iText(2310,1300,"5",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='6')iText(2310,1300,"6",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='7')iText(2310,1300,"7",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='8')iText(2310,1300,"8",GLUT_BITMAP_HELVETICA_18);
	if(ar[3]=='9')iText(2310,1300,"9",GLUT_BITMAP_HELVETICA_18);
	
}

int distance = 10400;

int cac_x = 3*2660+2560;
int cac_y = 300;
int bul_x = 2*2660+2560;
int bul_y = 350;
int tree_x = 1*2660+2560;
int tree_y = 300;

void tree()
{
	iSetColor(51,25,0);
	iFilledRectangle(tree_x,tree_y,40,122);
	iSetColor(0,204,0);
	iFilledCircle(tree_x+20,tree_y+128,64);
	iFilledCircle(tree_x+80,tree_y+128,16);
	iFilledCircle(tree_x+80,tree_y+100,16);
	iFilledCircle(tree_x+72,tree_y+80,16);
	iFilledCircle(tree_x+60,tree_y+64,16);
	iFilledCircle(tree_x+44,tree_y+64,16);
	iFilledCircle(tree_x+36,tree_y+64,16);
	iFilledCircle(tree_x+16,tree_y+64,16);
	iFilledCircle(tree_x+8,tree_y+72,16);
	iFilledCircle(tree_x,tree_y+80,16);
	iFilledCircle(tree_x-16,tree_y+80,16);
	iFilledCircle(tree_x-24,tree_y+88,16);
	iFilledCircle(tree_x-40,tree_y+108,16);
	iFilledCircle(tree_x-40,tree_y+124,16);
	iFilledCircle(tree_x-40,tree_y+132,16);
	iFilledCircle(tree_x-36,tree_y+148,16);
	iFilledCircle(tree_x-28,tree_y+156,16);
	iFilledCircle(tree_x+80,tree_y+144,16);
	iFilledCircle(tree_x+64,tree_y+160,16);
	iFilledCircle(tree_x+50,tree_y+176,16);
	iFilledCircle(tree_x+42,tree_y+180,16);
	iFilledCircle(tree_x+28,tree_y+176,16);
	iFilledCircle(tree_x+8,tree_y+180,16);
	iFilledCircle(tree_x+16,tree_y+180,16);
	iFilledCircle(tree_x,tree_y+180,16);


}
void bullet()
{
	iSetColor(51,25,0);
	iFilledRectangle(bul_x,bul_y,40,56);
	iFilledRectangle(bul_x+40,bul_y+4,16,48);
	iFilledEllipse(bul_x,bul_y+28,32,28);
	iSetColor(255,255,255);
	iFilledCircle(bul_x-12,bul_y+36,6);
	iSetColor(0,0,0);
	iFilledCircle(bul_x-16,bul_y+32,6);
	iSetColor(51,25,0);
	iFilledRectangle(bul_x+48,bul_y,18,56);


}

void cactus()
{	iSetColor(0,153,0);
	iFilledRectangle(cac_x,cac_y,32,112);
	iFilledRectangle(cac_x+32,cac_y+40,32,16);
	iFilledRectangle(cac_x+56,cac_y+40,16,32);
	iFilledRectangle(cac_x-32,cac_y+56,32,16);
	iFilledRectangle(cac_x-48,cac_y+56,16,32);
	iFilledCircle(cac_x+16,cac_y+112,16);
	iFilledCircle(cac_x+64,cac_y+72,8);
	iFilledCircle(cac_x-40,cac_y+88,8);


}
double distance_decrease = 0;
int in =0;
double another_parameter = 0;
int show_score_parameter = 10;

double intro_parameter = 0;
void intro(){
	intro_parameter+=0.05;
	if(intro_parameter>1&&intro_parameter<2)iShowBMP(0,0,"intro1.BMP");
	if(intro_parameter>2&&intro_parameter<3)iShowBMP(0,0,"intro2.BMP");
	if(intro_parameter>3&&intro_parameter<4)iShowBMP(0,0,"intro3.BMP");
	if(intro_parameter>4&&intro_parameter<5)iShowBMP(0,0,"intro4.BMP");
	if(intro_parameter>5&&intro_parameter<6)iShowBMP(0,0,"intro5.BMP");
	if(intro_parameter>6&&intro_parameter<7)iShowBMP(0,0,"intro3.BMP");
	if(intro_parameter>7){intro_menu=false;main_menu=true;}
}

void game_over_menu()
{
	iShowBMP(0,0,"game_over.BMP");
	iSetColor(255,255,255);
	iText(750,600,"ENTER YOUR NAME",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(32,142,43);
	iFilledRectangle(750,400,450,100);

	iSetColor(255,255,255);
	iText(770,440,string_name,GLUT_BITMAP_TIMES_ROMAN_24);
}

char br[100];

void intToString(int a)
{
	
	int d = 0;

	while(a>=10){

		if(a%10==0)br[d]='0';
		if(a%10==1)br[d]='1';
		if(a%10==2)br[d]='2';
		if(a%10==3)br[d]='3';
		if(a%10==4)br[d]='4';
		if(a%10==5)br[d]='5';
		if(a%10==6)br[d]='6';
		if(a%10==7)br[d]='7';
		if(a%10==8)br[d]='8';
		if(a%10==9)br[d]='9';
		d++;a/=10;

	}

	if(a==0)br[d]='0';
	if(a==1)br[d]='1';
	if(a==2)br[d]='2';
	if(a==3)br[d]='3';
	if(a==4)br[d]='4';
	if(a==5)br[d]='5';
	if(a==6)br[d]='6';
	if(a==7)br[d]='7';
	if(a==8)br[d]='8';
	if(a==9)br[d]='9';

	char temp;
	d++;
	for(int i= 0;i<d/2;i++){

		temp = br[i];
		br[i] = br[d-1];
		br[d-1]=temp;
	}

	//return br;
}

void score_menu()
{
	iSetColor(157,187,54);
	iFilledRectangle(0,0,2680,1440);

	iSetColor(0,0,0);
	iText(1100,1200,"HALL OF FAME",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(1100,1150,"______________",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(800,1000,"NAME",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(1600,1000,"SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	
	for(int i=0;i<dd-1;i++){
		iText(800,900-80*i,show_score[i].in_name,GLUT_BITMAP_TIMES_ROMAN_24);
		intToString(show_score[i].in_score);
		iText(1600,900-80*i,br,GLUT_BITMAP_TIMES_ROMAN_24);

		if(i>6)break;
		
	}

	
}

void iDraw()
{
	if(another_parameter>0)another_parameter-=0.015;
	if(another_parameter<0){another_parameter = 0;is_hit = false;}
	
	if(intro_menu==true)intro();
	if(main_menu==true){
		
		//if(in==0){iInitialize(1366, 768, "Mario");in=1;}
		iShowBMP(0,0,"mario2.BMP");
		iSetColor(155,32,52);
		iFilledRectangle(475,700,600,190);
		iSetColor(31,142,143);
		iText(650,790,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(155,32,52);
		iFilledRectangle(475,500,600,190);
		iSetColor(31,142,143);
		iText(640,590,"HIGH SCORE",GLUT_BITMAP_TIMES_ROMAN_24);


		iSetColor(155,32,52);
		iFilledRectangle(475,300,600,190);
		iSetColor(31,142,143);
		iText(690,390,"CREDIT",GLUT_BITMAP_TIMES_ROMAN_24);


		iSetColor(155,32,52);
		iFilledRectangle(475,100,600,190);
		iSetColor(31,142,143);
		iText(710,190,"QUIT",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	
	if(in_game==true){

		if(show_score_parameter<=9)show_life_meter=false;
		if(show_score_parameter<7)show_life_meter1=false;
		if(show_score_parameter<4)show_life_meter2=false;
		if(show_score_parameter<2)show_life_meter3=false;
		if(show_score_parameter<0){game_over=true;}
		score+=0.015;
		distance_decrease +=0.0015;
		distance-=distance_decrease;
		if(j==2)distance=10400;
		if(distance<8000)distance=8000;
		iClear();
		level2_background();
		main_character();
		tree();
		bullet();
		cactus();
		mushroom();

		iDelayMS(10);
		
		cac_x-=j*5;
		bul_x-=j*5;
		tree_x-=j*5;
		mush_x-=j*5;

		
		level2_background_parameter-=(double)(j*5);

		if(distance==8000){
			if(j>1.3)j=1.3;
			j+=0.015;
		}
		
		

		cloud_control();

		if(abs(mush_x-main_x)<100&&abs(mush_y-main_y)<100&&is_hit==false){

			is_hit=true;
			another_parameter = 1;
			show_score_parameter-=1;
		}

		if(abs(tree_x-main_x)<150&&abs(tree_y-main_y)<100&&is_hit==false){
			
			is_hit=true;
			another_parameter = 1;
			show_score_parameter-=3;
		}
		if(abs(cac_x-main_x)<100&&abs(cac_y-main_y)<100&&is_hit==false){
			
			is_hit=true;
			another_parameter = 1;
			show_score_parameter-=2;
		}
		if(abs(bul_x-main_x)<100&&abs(bul_y-main_y)<100&&is_hit==false){
			
			is_hit=true;
			another_parameter = 1;
			show_score_parameter-=1;
		}
		
		if(mush_x<-300) mush_x=distance ;
		if(tree_x<-300)tree_x=distance;
		if(bul_x<-300)bul_x=distance;
		if(cac_x<-300){cac_x=distance;};
		if(level2_background_parameter<-1000)level2_background_parameter=0;
		

		main_x=200;
		

		score_show();

	}

	if(show_score_menu==true){
	    //iSetTimer(10,score_menu);	
		score_menu();
		//score_menu_call = 0;
		//iDelay(100);
	}
	

	if(jump==true){

		iDelayMS(1);


			jump_parameter++;
			if(jump_parameter<=150){main_y+=4;jump_parameter++;}
			if(jump_parameter>150&&jump_parameter<=300)main_y-=2;

	}

	if(game_over==true){

		in_game=false;
        //break;
		game_over_menu();

		
	}




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
	//printf("Button Number %d %d\n", button,state);
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(main_menu==true&&mx>=253&&mx<=570&&my>=1060&&my<=1200){in_game=true;main_menu = false;}
		if(main_menu==true&&mx>=253&&mx<=570&&my>=955&&my<=1050){show_score_menu=true;main_menu=false;}
		if(main_menu==true&&mx>=475&&mx<=1075&&my>=700&&my<=890);//in_game=true;
		if(main_menu==true&&mx>=475&&mx<=1075&&my>=700&&my<=890);//in_game=true;
		printf("%d  %d",mx,my);

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
int length=0;
void iKeyboard(unsigned char key)
{
	if(key&&game_over==true){
		string_name[length]=key;
		length++;
	}
	if(key == 's'){

		if(main_y==300){jump=true;jump_parameter=0;main_y=300;}
	}

	if(game_over==true && key == ' '){
		temp_struct.in_score = score;
		strcpy(temp_struct.in_name,string_name);

		FILE *fp = fopen("data.txt","ab");

		fprintf(fp,"%s %d\n",temp_struct.in_name , temp_struct.in_score);
		fclose(fp);
		game_over=false;main_menu=true;
	
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
		//while(main_y>0){
			main_y-=100;
		//}
	}
	if((key == GLUT_KEY_UP)||(key == GLUT_KEY_PAGE_UP))
	{
		main_y+=100;
		//iDelay(3);

	}
	if(key == GLUT_KEY_LEFT)
	{
		main_x-=15;
	}
	if(key == GLUT_KEY_RIGHT)
	{
		main_x+=15;

		if(main_x>1200)main_x=1200;
		if(main_x==1200)box1x-=10;
		if(box1x<=0){iFilledRectangle(box2x,15,150,100);box2x-=10;}
	}
	//place your codes for other keys here
}
//int dd =0;
int main()
{

	FILE *fp = fopen("data.txt","r");
    dd =0;	
	while(!feof(fp)){

		fscanf(fp,"%s%d",&show_score[dd].in_name , &show_score[dd].in_score);
		printf("%s",show_score[dd].in_name);
		iText(770,440,string_name,GLUT_BITMAP_TIMES_ROMAN_24);
		dd++;
	}
	fclose(fp);

	for(int i=0;i<dd-2;i++){

		for(int j=i+1;j<dd;j++){

			if(strcmp(show_score[i].in_name,show_score[j].in_name)<0){

				temp_struct = show_score[i];
				show_score[i] = show_score[j];
				show_score[j] = temp_struct;


			}
		}

	}

	iInitialize(2560, 1440, "Mario");


	return 0;
}
