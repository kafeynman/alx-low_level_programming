#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet
 * Description: print the alphabet in lower case
 * Return: 0 (always), 1 (otherwise)
 */
int main(void)
{
	int i;

	for (i = 98; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);

	return (0);
}
