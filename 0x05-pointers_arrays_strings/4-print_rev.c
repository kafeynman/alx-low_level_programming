#include "main.h"

/**
* print_rev - prints a string in reverse, followed by a newline.
* @str: pointer to char. Which is actually an array.
* Return: none
*/

void print_rev(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	index--;
	while (index >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	_putchar('\n');
}
