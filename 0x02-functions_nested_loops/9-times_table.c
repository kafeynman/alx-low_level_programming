#include "main.h"

/**
 * times_table - print the times table
 * Description: print the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i, j, m, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = j * 9;
			char n[2] = (str) m;

			if (m > 9)
			{
				_putchar(n[0]);
				_putchar(n[1]);
			}
			else
			{
				_putchar(n[0]);
			}
			while (i != 9 && j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
