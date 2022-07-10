#include "main.h"

/**
 * _isdigit - checks if the argument is a digit between 0 - 9
 * @n: int parameter
 *
 * Return: 1 (digit), 0 (otherwise)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
