#include"color.h"
//#include"food.h"
#include<fstream>
using namespace std;

#ifndef LEVEL_H_
#define LEVEL_H_

class level : public coloor
{


protected:
//	food f1();
	int score;
	int p1, p2;// cordinates of player movement
	int e1, e2;//coordinates of enemy movement
	char enemy;
	char bonus;
	char player;
    int levell;
	fstream file;
	char lev[22][40];//22 is length and 40 is widt of map that is fixed 
	void level1();

public:
	level();



};

#endif /* LEVEL_H_ */
