#include "main.h"

/**
* reset_to_98 - always resets the parameter to 98.
* @n: a pointer to an int.
*
* Description: the functions takes in an argument and prints the value
*		after printing the value it resets the value of the argument
*		to 98.
* Return: void
*/

void reset_to_98(int *n)
{
	_putchar((*n % 10) + '0');
	*n = 98;
	_putchar((*n % 10) + '0');
}
