#include "main.h"

/**
 * jack_bauer - print time
 *
 * Description: Print the time from 0001 - 2359
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j, k, m, n;

	for (i = 48; i < 51; i++)
	{
		if (i == 50)
		{
			n = 53;
		}
		else
		{
			n = 58;
		}

		for (j = 48; j < n; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (m = 48; m < 58; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
