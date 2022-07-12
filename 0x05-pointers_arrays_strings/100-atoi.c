#include "main.h"

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
		{
			res * (-1);
		}
		else if (_isdigit(s[i]) == 0 && _isdigit(s[i -1]) == 1)
		{
			break;
		}
	}

	return (res);
}

int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
