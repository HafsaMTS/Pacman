#ifndef GP_H
#define GP_H
#include"food.h"
#include"level.h"

class gp :public level
{
	int i;
	int mov;
	int mape;
	int s;
	int doo;
	int z;
	int lives;
	int endgame;
	int go;
	int enemygo;
	int flag;
	void draw();
	void enem();
	void moveup();
	void movedown();
	void moveright();
	void moveleft();
public:

	gp();
	void play();
};

#endif // GP_H
