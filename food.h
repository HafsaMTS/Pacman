#include <iostream>

struct node
{
	int data;
	node *next;
};
class food
{
	node * top;
public:
	food()
	{
		top = NULL;
	}
	void push();
	void pop();
	int add();
};
