#include "main.h"

/**
* rev_string - reverses a string.
* @s: string arg.
* Return: nothing.
*/

void rev_string(char *s)
{
	int i = 0, j = 0, k = 0, m = 0;
	char temp_str[100];

	while (*(s + i) != '\0')
	{
		i++;
	}
	temp_str[i] = '\0';
	i--;

	while (i >= 0)
	{
		temp_str[i] = s[j];
		j++;
		i--;
	}
	while (*(temp_str + k) != '\0')
	{
		s[i] = temp_str[i];
	}
	while (*(s + m) != '\0')
	{
		_putchar(s[m]);
	}
}
