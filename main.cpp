
/*
MUDASSIR MAQSOOD KHAN
HAFSA AHMED
MTS 37 A
PAC MAN GAME 
* /
#include"menu.h"
#include<windows.h>
#include<iostream>
#include"gp.h"
menu men;
gp play;
using namespace std;


void welcome()
{

	int i = 1;
	while (!GetAsyncKeyState(VK_SPACE))
	{

		men.welcome(i);
		if (i == 5)
		{
			i = 0;
		}

		i++;
	}


}
void mainmenu()
{
	men.mainmenu();

}

void level()
{


	play.play();
	men.gameplay = 0;

}
int main()
{

	welcome();

	while (men.quit == 0)
	{
		mainmenu();
		if (men.quit == 0)
		{

			level();

		}
	}

}
