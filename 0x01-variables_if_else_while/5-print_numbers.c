#include <stdio.h>

/**
 * main - entry point of the program
 * Description: Prints base 10 numbers
 * Return: 0 (successful), 1 (otherwise)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);

}
