/*
MUDASSIR MAQSOOD KHAN 
HAFSA AHMED 
*/
#include"level.h"
#ifndef MENU_H_
#define MENU_H
#include"color.h"
#include"level.h"
class menu : public level
{


	void Ins();
	void start();
	void credit();
	void exit();



public:
	menu(); void welcome(int i);
	void mainmenu(); int quit;
	int gameplay;

};

#endif /* MENU_H_ */
