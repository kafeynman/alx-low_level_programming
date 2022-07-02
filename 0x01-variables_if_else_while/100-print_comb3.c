#include <stdio.h>

/**
 * main - program entry
 * Description: Print 2 digit combinations of numbers between 0-9
 * Return: 0 success, 1 otherwise
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		int stat;

		for (j = i; j < 58; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					stat = 1;
				}
				if (stat != 1)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
