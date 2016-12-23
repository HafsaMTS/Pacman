#include"food.h"
void food::push()
{
	int value = 1;
	node * ptr = new node;
	ptr->data = value;
	ptr->next = NULL;
	if (top != NULL)

		ptr->next = top;
	top = ptr;

}
void food::pop()
{
	int value = 1;
	node * temp = new node;
	temp = top;
	top = top->next;
	delete temp;
}
int food::add()
{
	int sum = 0;
	node *currentPtr = top;

	while (currentPtr != NULL)
	{
		sum = sum + currentPtr->data;
		currentPtr = currentPtr->next;
	}
	return sum;

}

