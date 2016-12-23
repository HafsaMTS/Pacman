
#include<windows.h>

#ifndef COLOR_H_
#define COLOR_H_

class coloor {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
protected:
	void color(int a);
	void coord(int x, int y);



};

#endif /* COLOR_H_ */
