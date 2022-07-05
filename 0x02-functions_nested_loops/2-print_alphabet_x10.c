#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Description: Prints alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
