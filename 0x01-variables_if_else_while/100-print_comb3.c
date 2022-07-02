#include <stdio.h>

/**
 * main - program entry
 * Description: Print 2 digit combinations of numbers between 0-9
 * Return: 0 success, 1 otherwise
 */
int main(void)
{
	int n;
	int x;

	for (int i = 48; i <= 57; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			putchar(i);
			x += 1;
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
