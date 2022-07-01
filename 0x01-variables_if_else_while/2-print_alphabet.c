#include <stdio.h>

/**
 * main - prints the alphabet
 * Description: Prints the alphabet in lowercase
 * Return: 0 successful, 1 otherwise
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
