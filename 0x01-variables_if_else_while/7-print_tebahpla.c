#include <stdio.h>

/**
 * main - entry point of program
 * Description: print alphabet in reverse lowercase
 * Return: 0 (success)
 */
int main(void)
{
	for (int i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
