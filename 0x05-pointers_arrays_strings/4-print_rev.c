#include "main.h"
#include <stdio.h>

#define MAX_SIZE 100
/**
* print_rev - prints a string in reverse, followed by a newline.
* @str: pointer to char. Which is actually an array.
* Return: none
*/

void print_rev(char *str)
{
	char s[MAX_SIZE];
	int i = 0, j = 0, len = 0;

	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}

	/*char s[len];*/
	/**
	*while (*(str + j) != '\0')
	*{
	*	*(s + j) = *(str + len);
	*	j++;
	*	len--;
	*}
	*/

	for (j; j < MAX_SIZE; j++, len--)
	{
		if (*(s + j) != '\0')
		{
			*(s + j) = *(str + len);
		}
		else
		{
			*(s + j) = '\0';
			break;
		}
	}
	_puts(s);
	printf("%d\n", len);
}
