#include "main.h"

/**
 * _isupper - the function checks if a character is uppercase
 * @c: int argument
 *
 * Return: 1 (uppercase), 0 (otherwise)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
