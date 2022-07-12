#include "main.h"
#include <stdlib.h>

/**
* rev_string - reverses a string.
* @s: string arg.
* Return: nothing.
*/

void rev_string(char *s)
{
	int len = 0, i = 0;
	/* char *s_cp;*/

	while (s[i] != '\0')
	{
		len++;
	}
	_putchar((len % 10) + '0');
}
