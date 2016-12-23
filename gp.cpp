
#include"gp.h"
#include"level.h"
#include<windows.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
# include <conio.h>
# include <cstdlib>
using namespace std;

void gp::moveleft()


{
	if (lev[p1][p2 - 1] != '|')
	{


		if ( lev[p1][p2 - 1] == ' ' || lev[p1][p2 - 1] == enemy) 

		{
			if (lev[p1][p2 - 1] == enemy)// if hits with enemy one life lost 
			{

				lev[p1][p2] = ' ';
				lev[p1][p2 - 1] = enemy;

				lives--;
				Sleep(2000);
				p1 = 20;// starting position for player 
				p2 = 19;

				lev[p1][p2] = player;
				doo = 0;
			}
			else // after loosing live it will move towards left
			lev[p1][p2 - 1] = player;
			lev[p1][p2] = ' ';
			p2--;

		}
		else if (lev[p1][p2 - 1] == '*' || lev[p1][p2 - 1] == bonus)//if found steric or lives are 3 
		{


		if (lev[p1][p2 - 1] == '*')// if found steric increase score by 1
		{

		score = score + 1;
		}
		else
		{
		score = score + 10;
		}
		lev[p1][p2 - 1] = player;
		lev[p1][p2] = ' ';

		p2--;
		}
	}

}
void gp::moveright()
{
	if (lev[p1][p2 + 1] != '|')
	{
		if (lev[p1][p2 + 1] == ' ' || lev[p1][p2 + 1] == enemy)
		{
			if (lev[p1][p2 + 1] == enemy)
			{
				lev[p1][p2] = ' ';
				lev[p1][p2 + 1] = enemy;


				lives--;
				Sleep(2000);
				p1 = 20;
				p2 = 19;

				lev[p1][p2] = player;
				doo = 0;
			}
			else

				lev[p1][p2 + 1] = player;

			lev[p1][p2] = ' ';
			p2++;

		}
		else if (lev[p1][p2 + 1] == '*' || lev[p1][p2 + 1] == bonus)
		{


			if (lev[p1][p2 + 1] == '*')
			{

				score = score + 1;
			}
			else
			{
				score = score + 10;

			}
			lev[p1][p2 + 1] = player;
			lev[p1][p2] = ' ';

			p2++;
		}
	}

}
void gp::movedown()
{
	if (lev[p1 + 1][p2] != '|')
	{


		if (lev[p1 + 1][p2] == ' ' || lev[p1 + 1][p2] == enemy)
		{
			if (lev[p1 + 1][p2] == enemy)

			{

				lev[p1][p2] = ' ';
				lev[p1 + 1][p2] = enemy;

				lives--;
				Sleep(2000);
				p1 = 20;
				p2 = 19;

				lev[p1][p2] = player;
				doo = 0;
			}
			else

				lev[p1 + 1][p2] = player;

			lev[p1][p2] = ' ';
			p1++;

		}
		else if (lev[p1 + 1][p2] == '*' || lev[p1 + 1][p2] == bonus)
		{


			if (lev[p1 + 1][p2] == '*')
			{

				score = score + 1;
			}
			else
			{
				score = score + 10;
			}
			lev[p1 + 1][p2] = player;
			lev[p1][p2] = ' ';

			p1++;

		}

	}


}

void gp::moveup()
{
	if (lev[p1 - 1][p2] != '|')
	{


		if (lev[p1 - 1][p2] == ' ' || lev[p1 - 1][p2] == enemy)
		{
			if (lev[p1 - 1][p2] == enemy)
			{
				lev[p1][p2] = ' ';

				lev[p1 - 1][p2] = enemy;


				lives--;
				Sleep(2000);
				p1 = 20;
				p2 = 19;

				lev[p1][p2] = player;
				doo = 0;
			}
			else
				lev[p1 - 1][p2] = player;

			lev[p1][p2] = ' ';
			p1--;

		}
		else if (lev[p1 - 1][p2] == '*' || lev[p1 - 1][p2] == bonus)
		{


			if (lev[p1 - 1][p2] == '*')
			{

				score = score + 1;
			}
			else
			{
				score = score + 10;
			}
			lev[p1 - 1][p2] = player;
			lev[p1][p2] = ' ';

			p1--;

		}
	}

}
void gp::draw()
{
	coord(0, 0);
	color(240);

	cout << "Score :" << score;
	color(7);
	cout << "\t\t";
	color(240);

	cout << "Lives :" << lives;
	color(7);
	cout << "\t\t";
	color(240);


	cout << endl;
	for (int i = 0; i<22; i++)
	{
		for (int k = 0; k<39; k++)
		{
			if (lev[i][k] == '*')
			{
				color(8);
				mape++;
				cout << lev[i][k];
				continue;
			}
			else if (lev[i][k] == player)
			{
				color(14);//yellow colour to pacmnan
				cout << lev[i][k];
				continue;

			}

			else if (lev[i][k] == bonus)
			{
				color(4);//red colour to bonus 

				cout << lev[i][k];
				continue;

			}
			else if (lev[i][k] == enemy)
			{
				color(10);//green colour to enemy

				cout << lev[i][k];
				continue;

			}
			color(9);
			cout << lev[i][k];
		}
		cout << endl;

	}
}

void gp::play()
{


	coord(35, 10);
	color(10);

	cout << "Level 1";
	Sleep(2000);

	system("cls");

	level1();

	for (; 1 && lives > 0;)
	{
		//to pause game 
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			system("cls");
			int q = 0;
			int k = 0;
			while (q == 0)
			{

				system("cls");

				coord(35, 10);
				color(10);

				cout << "Paused";
				cout << endl;
				doo = 0;
				coord(29, 12);
				color(7);
				cout << "Press Space to Resume";
				cout << endl;
				coord(22, 14);
				color(4);

				cout << "Press Escape to Return to Main Menu";
				Sleep(200);
				if (GetAsyncKeyState(VK_SPACE))
				{

					q = 1;
					system("cls");
				}
				else if (GetAsyncKeyState(VK_ESCAPE))
				{

					q = 1;
					k = 1;
					levell = 1;
					break;
				}

			}
			if (k > 0)
			{
				lives = 0;
			}
		}

		if (mape == 0)
		{
			if (endgame == 1)
			{
				system("cls");
				coord(35, 10);
				color(10);
				cout << "The End";



				Sleep(2000);
				break;
			}
			else
			{
				if (levell == 2)
				{
					
					/*while (top != NULL)
					{
						f1.pop();
					}*/

					Sleep(2000);
					system("cls");
					coord(35, 10);
					color(10);

					cout << "Level 2";

					z = 0;
					s = 1;
					system("cls");
					level1();
					system("cls");
				}
				else if (levell == 3)
				{
					
					/*while (top != NULL)
					{
					f1.pop();
					}*/
					Sleep(2000);
					system("cls");
					coord(35, 10);
					color(10);

					cout << "Level 3";

					z = 0;
					s = 1;
					endgame = 1;
					system("cls");
					level1();
					system("cls");

				}
			}
		}
		doo = go;
		// player movement conditons
		if (GetAsyncKeyState(VK_DOWN))
		{
			go = 1;

			movedown();


		}

		if (GetAsyncKeyState(VK_UP))
		{
			go = 2;
			moveup();
		}


		if (GetAsyncKeyState(VK_RIGHT))
		{
			go = 3;

			moveright();
		}


		if (GetAsyncKeyState(VK_LEFT))
		{
			go = 4;

			moveleft();
		}
		//loop to move the pac man itself 
		if (doo == 1)
		{


		        if (flag == 10)
		         {

		        if (lev[p1 + 1][p2] == '|'&&lev[p1][p2 + 1] == '|')
		{
		doo = 4;
		go = doo;
		continue;

		}
		if (lev[p1 + 1][p2] == '|'&&lev[p1][p2 - 1] == '|')
		{
		doo = 3;
		go = doo;
		continue;


		}
		}
		flag = 10;

		movedown();
		}

		if (doo == 2)
		{

		if (flag == 10)
		{


		if (lev[p1 - 1][p2] == '|'&&lev[p1][p2 + 1] == '|')
		{
		doo = 4;
		go = doo;
		continue;

		}
		if (lev[p1 - 1][p2] == '|'&&lev[p1][p2 - 1] == '|')
		{
		doo = 3;
		go = doo;
		continue;

		}
		}
		flag = 10;
		moveup();
		}
		if (doo == 3)
		{
		if (lev[p1][p2 + 1] == '|'&&lev[p1 - 1][p2] == '|')
		{
		doo = 1;
		go = doo;
		continue;

		}
		if (lev[p1 + 1][p2] == '|'&&lev[p1][p2 + 1] == '|')
		{
		doo = 2;
		go = doo;
		continue;

		}
		moveright();
		}
		if (doo == 4)
		{
		if (lev[p1][p2 - 1] == '|'&&lev[p1 - 1][p2] == '|')
		{
		doo = 1;
		go = doo;
		continue;

		}
		if (lev[p1 + 1][p2] == '|'&&lev[p1][p2 - 1] == '|')
		{
		doo = 2;
		go = doo;
		continue;

		}
		flag = 0;
		moveleft();
		}

		if (lev[p1][p2] == enemy)// if found enemy then live decrease
		{


		lives--;
		Sleep(2000);
		if (z == 1 || z == 3)
		{
		//f1.pop();
		z = 2;
		}
		p1 = 20;
		p2 = 19;

		lev[p1][p2] = player;
		doo = 0;
		}
		enem();
		mape = 0;
		Sleep(90);
		draw();

		}

		if (lives == 0)
		{
			system("cls");
			coord(35, 10);
			color(7);
			cout << "Game Over";
			Sleep(2000);
			Sleep(2000);
		}

		levell = 1;
		z = 0;
		s = 1;
		lives = 3;
		score = 0;
		p1 = 20;
		p2 = 19;
		/*while (top != NULL)
		{
		f1.pop();
		}*/
		endgame = 0;
		return;
	}

void gp::enem()
{
	mov = i;
    i = (rand() % 4) + 1;
	if (s == 1)
		lev[e1][e2] = '*';
	if (s == 2)
		lev[e1][e2] = ' ';
	if (s == 3)
		lev[e1][e2] = bonus;

	if (z>0)
	{
		s = z;
	}
	else if (z == 0)//player should die
	{
		lev[e1][e2] = ' ';
	}
	if (mov == 1)
	{
		if (lev[e1 + 1][e2] != '|')
		{
			lev[e1 + 1][e2] = enemy;

			e1++;
		}
		else
		{
			mov = 3;

		}
	}
	
	if (mov == 2)
	{
		if (lev[e1 - 1][e2] != '|')
		{


			lev[e1 - 1][e2] = enemy;
			e1--;
		}
		else
		{

			mov = 4;
		}
	}
	if (mov == 3)
	{
		if (lev[e1][e2 + 1] != '|')
		{


			lev[e1][e2 + 1] = enemy;

			e2++;
		}
		else
		{


			mov = 4;
		}

	}

	if (mov == 4)
	{
		if (lev[e1][e2 - 1] != '|')
		{


			lev[e1][e2 - 1] = enemy;

			e2--;
		}
		else if (lev[e1][e2 - 1] == '|'&&lev[e1 + 1][e2] != '|')
		{



			lev[e1 + 1][e2] = enemy;

			e1++;
			enemygo = 1;
		}
		else if (lev[e1 + 1][e2] == '|'&&lev[e1 - 1][e2] != '|')
		{

			lev[e1 - 1][e2] = enemy;

			e1--;
			enemygo = 2;
		}
	}

	
	if (i == 1)
	{



		if (lev[e1 + 1][e2] == '*')
		{
			z = 1;
		}
		else if (lev[e1 + 1][e2] == ' ' || lev[e1 + 1][e2] == player)
		{
			z = 2;
		}
		else if (lev[e1 + 1][e2] == bonus)
		{
			z = 3;
		}

		else if (lev[e1 + 1][e2] == '|')
		{

			if (lev[e1][e2 + 1] == '*')
			{
				z = 1;
			}
			else if (lev[e1][e2 + 1] == ' ' || lev[e1][e2 + 1] == player)
			{
				z = 2;
			}
			else if (lev[e1][e2 + 1] == bonus)
			{
				z = 3;
			}
		}
	}

	
	



}
gp::gp()

{
	mov = 0;
	flag = 0;
	enemygo = 0;
	doo = 0;
	i = 3;
	s = 1;
	z = 0;
	lives = 3;
	endgame = 0;
	go = 0;
	mape = 1;
}
