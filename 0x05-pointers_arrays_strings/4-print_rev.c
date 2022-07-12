#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse, followed by a newline.
* @str: pointer to char. Which is actually an array.
* Return: none
*/

void print_rev(char *str)
{
	int len = sizeof(str);
	/* char *s[sizeof(len)];*/
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(s + i));
	}
	_putchar(len);
}
