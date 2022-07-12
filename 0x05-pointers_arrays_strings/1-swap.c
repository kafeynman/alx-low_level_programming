#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: first pointer arg
* @b: second pointer arg
* Return: none
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
