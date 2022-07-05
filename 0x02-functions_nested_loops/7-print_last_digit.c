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
	if ((n % 10) < 0)
	{
		return ((n % 10) * -1);
	}
	else
	{
		return (n % 10);
	}
}
