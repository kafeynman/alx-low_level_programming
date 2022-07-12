#include "main.h"

/**
* rev_string - reverses a string.
* @s: string arg.
* Return: nothing.
*/

void rev_string(char *s)
{
	char str[] = "nothing printed";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
