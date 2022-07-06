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
	int i;

	if (n >= 98)
	{
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
	else if (n <= 98)
	{
		for (i = n; n <= 98; i++)
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
}
