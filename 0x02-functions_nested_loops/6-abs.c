#include "main.h"

/**
 * _abs - computes absolute value of a number
 * @n: accepts an int value as an argument
 *
 * Description: computes the absolute value of any given number
 * Return: n (if positive), n * -1 (if n negative)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
