#include "main.h"

/**
 * _islower - checker function
 * @c: takes an int argument
 *
 * Description: function checks if a character is lowercase
 * Return: 1 (lowercase), 0 (otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	} else if (c < 96 && c > 122)
	{
		return (0);
	}
}
