#include"level.h"
#include <iostream>
#include<stdlib.h>
#include<windows.h>

level::level()
{
	/*while (top != NULL)
	{
	f1.pop();
	}*/

	e1 = 0; e2 = 0;
	bonus = 3;// max NO Of hearts
	score = 0;
	player = 2;
	p1 = 20;
	levell = 1;
	p2 = 19;
	enemy = 1;
}

//file reading
void level::level1()
{
	system("cls");
	if (levell == 2)
	{
		p1 = 20;// starting position of player
		p2 = 19;

		e1 = 1; e2 = 18;
		file.open("map2.txt");
		levell++;

	}
	else if (levell == 1)
	{
		e1 = 1; e2 = 18;//starting x and y cordinates for enemy 
		file.open("map3.txt");
		levell++;
	}
	else
	{
		e1 = 10; e2 = 18;
		p1 = 20;
		p2 = 19;

		file.open("map.txt");
		levell = 1;
	}
	for (int i = 0; i < 22; i++)
	{
		for (int k = 0; k < 39; k++)
		{
			file >> lev[i][k];
		}
		cout << endl;
	}
	file.close();
	lev[p1][p2] = player;
	lev[e1][e2] = enemy;
	//for loop to generate hearts in the game 
	for (int i = 0; i < 4; i++) 

	{
		int x, y;
		x = rand() % 21 + i;// will generate random no from i to 21 i.e fro columns 
		y = rand() % 39 + i;
		if (x != p1&&y != p2&&x != e1&&y != e2&& lev[x][y] == '*')//if cordinates of enemy and player doesnot match with the random no generated mean thay are not at the same place and there issteric(////////food) at that positon 
		{
			if (lev[x][y] == bonus)
			{
				i--;
			}
			else
			{
				lev[x][y] = bonus;
			}
		}
		else if (lev[x][y] == '|' || lev[x][y] == 'X' || lev[x][y] == player || lev[x][y] == enemy)
		{
			i--;
		}
	}
	color(240);
	cout << "Score :" << score;
	cout << endl;

	// 22 length of map and 39 width of map 
	// first it will go in no of rows than chk for coloumns
	// loop to colur the rest of background 
		for (int i = 0; i < 22; i++)
		{
		for (int k = 0; k < 39; k++)
		{
		if (lev[i][k] == '*')
		{

			//f1.push();
		color(8);
		cout << lev[i][k];
		continue;
		}
		else if (lev[i][k] == player)
		{
		color(14);
		cout << lev[i][k];
		continue;

		}

		else if (lev[i][k] == bonus)
		{
		color(4);

		cout << lev[i][k];
		//f1.push();


		continue;
		}
		else if (lev[i][k] == enemy)
		{
		color(10);
		cout << lev[i][k];
		continue;

		}
		color(9);
		cout << lev[i][k];
		}
		cout << endl;

		}
		system("cls");

		}
