#include "main.h"

/**
 * print_sign - prints =/- sign
 * @n: argument with the number to be checked
 *
 * Description: prints sign of a number if greater or lesser than 0
 * Return: 1 (positive), 0 (zero) or -1 (negative)
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
