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

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (m = 0; m < 10; m++)
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
