#include"menu.h"
#include<iostream>

#include<windows.h>

#include<iomanip>
#include"color.h"
#include"level.h"
using namespace std;

menu::menu()
{
	gameplay = 0;
	quit = 0;
}
void menu::welcome(int i)
{
	color(240);
	cout << "\t\t\t\tWelcome To\t\t\t\t\t";
	coord(10, 4);

	color(i);
	cout << "\n               *** ***            *****          **********";
	cout << "\n               ***   ***         *** ***         **********";
	cout << "\n               ***   ***        ***   ***        ***       ";
	cout << "\n               *** ***         ***     ***       ***       ";
	cout << "\n               ***             ***********       ***       ";
	cout << "\n               ***             ***     ***       **********";
	cout << "\n               ***             ***     ***       **********";
	color(i + 1);
	cout << "\n\n";
	cout << "\n            *************          *****          **********";
	cout << "\n            *************         *** ***         **********";
	cout << "\n            ***  ***  ***        ***   ***        ***    ***";
	cout << "\n            ***  ***  ***       ***     ***       ***    ***";
	cout << "\n            ***  ***  ***       ***********       ***    ***";
	cout << "\n            ***  ***  ***       ***     ***       ***    ***";
	cout << "\n            ***  ***  ***       ***     ***       ***    ***";
	color(100);
	cout << "\n\n\n\t\t\tPRESS SPACE BAR TO CONTINUE!\t\t\t\t";
	Sleep(200);

	color(7);
	system("cls");


}

void menu::Ins()
{
	color(240);
	cout << "\t\t\t\tMain Menu\t\t\t\t\t";

	color(10);
	cout << "\n\n\n\t\t\t\t1  Instructions";
	color(8);
	cout << "\n\n\n\t\t\t\t2  Start Game";
	cout << "\n\n\n\t\t\t\t3  Credits";
	cout << "\n\n\n\t\t\t\t4  Exit";
	color(240);
	cout << "\n\n\n\t\t\t\tPress SPACE to Select\t\t\t\t";
	color(7);

	if (GetAsyncKeyState(VK_DOWN))
	{


		Sleep(100);// delay time

		system("cls");// used to clear the console and not make it visible
		start();
		return;
	}		if (GetAsyncKeyState(VK_UP))
	{


		Sleep(100);

		system("cls");
		exit();
		return;
	}

	if (GetAsyncKeyState(VK_SPACE) && quit == 0)
	{


		while (!GetAsyncKeyState(VK_ESCAPE))
		{
			system("cls");
			coord(10, 6);
			color(240);

			cout << " INSTRUCTIONS ";
			color(4);
			coord(10, 8);
			cout << "=> Avoid contact with Ghost, otherwise you'll lose a life." << endl;
			coord(10, 9);
			cout << "=> Eat Dots to get score." << endl;
			coord(10, 10);
			cout << "=> Eat Hearts to get bonus." << endl;
			coord(10, 12);
			color(240);
			cout << " KEYS " << endl;
			color(4);
			coord(10, 14);
			cout << "* Use UP key to move up.";
			coord(10, 15);
			cout << "* Use RIGHT key to move right.";
			coord(10, 16);
			cout << "* Use LEFT key to move left.";
			coord(10, 17);
			cout << "* Use DOWN key to move down.";
			coord(8, 20);
			color(4);
			color(240);
			cout << "\n\n\n\t\t\t\tPress ESCAPE to Go Back\t\t\t\t";
			color(7);
			Sleep(200);

		}

		return;
	}

}

void menu::start()
{

	color(240);
	cout << "\t\t\t\tMain Menu\t\t\t\t\t";

	color(8);
	cout << "\n\n\n\t\t\t\t1  Instructions";
	color(10);

	cout << "\n\n\n\t\t\t\t2  Start Game";
	color(8);


	cout << "\n\n\n\t\t\t\t3  Credits";
	cout << "\n\n\n\t\t\t\t4  Exit";
	color(240);

	cout << "\n\n\n\t\t\t\tPress SPACE to Select\t\t\t\t";
	color(7);
	int i = 0;
	while (i == 0)
	{
		if (GetAsyncKeyState(VK_UP))
		{


			Sleep(200);

			system("cls");
			i = 1;

			Ins();
			return;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{


			Sleep(200);

			system("cls");

			i = 1;
			credit();
			return;
		}
		else if (GetAsyncKeyState(VK_SPACE) && quit == 0)
		{

			gameplay = 1;
			i = 1;
			system("cls;");
			return;
		}
	}


}

void menu::credit()
{
	color(240);
	cout << "\t\t\t\tMain Menu\t\t\t\t\t";

	color(8);
	cout << "\n\n\n\t\t\t\t1  Instructions";
	cout << "\n\n\n\t\t\t\t2  Start Game";
	color(10);
	cout << "\n\n\n\t\t\t\t3  Credits";

	color(8);
	cout << "\n\n\n\t\t\t\t4  Exit";
	color(240);

	cout << "\n\n\n\t\t\t\tPress SPACE to Select\t\t\t\t";
	color(7);
	int i = 0;

	while (i == 0)
	{
		if (GetAsyncKeyState(VK_UP))
		{

			Sleep(200);

			system("cls");
			i = 1;

			start();
			return;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{


			Sleep(200);

			system("cls");
			i = 1;
			exit();
			return;
		}
		if (GetAsyncKeyState(VK_SPACE) && quit == 0)
		{
			int x = 0, y = 0, i = 2;


			while (!GetAsyncKeyState(VK_ESCAPE))
			{
				system("cls");


				color(240);

				cout << "\t\t\t\t   Created By\t\t\t\t\t";

				coord(x, y);


				color(i);
				cout << "\n\n\n\t\t\t     HAFSA AHMED  8164";
				cout << "\n\n\n\t\t\t     MUDASSIR MAQSOOD KHAN 8047";

				Sleep(500);
				y = y + 3;
				if (y > 15)
				{
					system("cls");
					color(240);
					cout << "\t\t\t\t   Created By\t\t\t\t\t";
					Sleep(500);
					y = 0; color(7);
					i++;
					if (i == 14)
					{
						i = 2;
					}

				}
			}
			system("cls");
			color(7);

			credit();
			return;

		}

	}

}

void menu::exit()
{
	color(240);
	cout << "\t\t\t\tMain Menu\t\t\t\t\t";

	color(8);
	cout << "\n\n\n\t\t\t\t1  Instructions";
	cout << "\n\n\n\t\t\t\t2  Start Game";
	cout << "\n\n\n\t\t\t\t3  Credits";

	color(10);
	cout << "\n\n\n\t\t\t\t4  Exit";
	color(240);

	cout << "\n\n\n\t\t\t\tPress SPACE to Select\t\t\t\t";
	color(7);
	int i = 0;
	while (i == 0)
	{
		if (GetAsyncKeyState(VK_UP))
		{

			Sleep(200);
			system("cls");

			credit()
				; i = 1;

			return;
		}
		if (GetAsyncKeyState(VK_SPACE))
		{

			quit = 10;
			i++;
			return;

		}	if (GetAsyncKeyState(VK_DOWN))
		{

			Sleep(200);
			system("cls");

			Ins(); i = 1;
			return;


		}


	}
}

void menu::mainmenu()
{
	Sleep(200);

	while (quit == 0 && gameplay == 0)
	{
		Ins();
		Sleep(200);

		system("cls");

	}

}
