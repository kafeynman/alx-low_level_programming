#include "main.h"

/**
 * _isalpha - checks if char is alpha
 * @c: argument c is an int
 *
 * Description: checks if a letter is a lower or uppercse alphabet
 * Return: 1 (alpha), 0 (otherwise)
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
