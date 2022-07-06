#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers in order to 98
 * @n: the fisrt number to be printed
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		printf("%d\n", 98);
	}
}
