#include "main.h"

/**
 * jack_bauer - print time
 *
 * Description: Print the time from 0001 - 2359
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 52; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (m = 48; m < 58; m++)
				{
					_putchar(i);
					_putchar(k);
					_putchar(':');
					_putchar(k);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
