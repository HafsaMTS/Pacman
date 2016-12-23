#include"color.h"
void coloor::color(int a)
{

	SetConsoleTextAttribute(h, a);
}
void coloor::coord(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(h, coord);
}
