#include <stdio.h>

/**
 * main - program entry
 * Description: Print numbers 0-9 seperated by ,
 * Return: 0 (always)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
