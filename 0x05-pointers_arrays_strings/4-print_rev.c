#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse, followed by a newline.
* @str: pointer to char. Which is actually an array.
* Return: none
*/

void print_rev(char *str)
{
	int i = 0, j = 0, len = 0;

	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}

	char s[len];

	while (*(str + j) != '\0')
	{
		*(s + j) = *(str + len);
		j++;
		len--;
	}
	_puts(s);
	printf("%d\n", len);
}
