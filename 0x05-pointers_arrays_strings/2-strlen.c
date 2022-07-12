#include "main.h"

/**
* _strlen - calculate the length of a string.
* @s: pointer to a char.
* Return: length of the string.
*/

int _strlen(char *s)
{
	int i, counter;

	counter = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		counter++;
	}

	return (counter);
}
