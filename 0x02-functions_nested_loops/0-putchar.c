#include <stdio.h>
#include "main.h"

/**
 * main - print a string
 * Descriptin: Print the string _putchar
 * Return: 0 (always), 1 (otherwise)
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
