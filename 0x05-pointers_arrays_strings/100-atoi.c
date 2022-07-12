#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer.
* @s: string argument
* Return: int
*/

int _atoi(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isdigit(s[i]) == 1)
		{
			res = res * 10 + s[i] - '0';
		}
		else if (s[i] == '-')
		{	printf("negative\n");
			res *= -1;
		}
		else if (_isdigit(s[i]) == 0 && _isdigit(s[i - 1]) == 1)
		{
			break;
		}
	}

	return (res);
}

/**
* _isdigit - checks if an alpha is a digit
* @c: argument
* Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
