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
	int k;

	for (i = 48; i < 57; i++)
	{
		for (j = i; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
