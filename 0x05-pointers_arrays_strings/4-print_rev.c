#include "main.h"
#include <stdio.h>

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
	while (i >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
