#include <stdio.h>

/**
 * main - entry point
 * Description: Prints lowercase and upper case alphabet
 * Return: 0 (successful), 1 (otherwise)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
