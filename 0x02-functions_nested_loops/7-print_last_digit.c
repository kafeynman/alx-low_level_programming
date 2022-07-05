#include "main.h"

/**
 * print_last_digit - print a number
 * @n: takes an int parameter
 *
 * Description: Prints the last digit of a number
 * Return: n
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');

	return (i);
}
