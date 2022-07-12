#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer.
* @s: string argument
* Return: int
*/

int _atoi(char *s)
{
	unsigned int res = 0, i;
	int sign = 1, nodigi = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isdigit(s[i]) == 1)
		{
			nodigit = 0;
			res = res * 10 + s[i] - '0';
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (i != 0)
		{
			if(_isdigit(s[i]) == 0 && _isdigit(s[i - 1]) == 1)
			{
				break;
			}
		}
	}

	if (sign < 0)
		return (res *= -1);
	else if (nodigi == 1)
		return (0);
	else
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
