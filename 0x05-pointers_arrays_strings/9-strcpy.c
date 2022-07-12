#include "main.h"
#include <stdlib.h>

/**
* _strcpy - copy src to dest
* @dest: copied string
* @src: src string
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}

	dest = (char *)malloc(len * sizeof(char));

	if (dest == NULL)
	{
		exit(0);
	}
	else
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
