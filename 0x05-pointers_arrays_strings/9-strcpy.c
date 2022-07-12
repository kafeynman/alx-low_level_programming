#include "main.h"
#include <stdlib.h>

/**
* _strcpy - copy the string src into dest
* @dest: pointer to string.
* @src: pointer to string
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;
	char *s_cp;

	while (src[i] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(len * sizeof(char));
	i = 0;
	--len;

	if (dest == NULL)
	{
		exit(0);
	}
	else
	{
		while (src[i] != '\0')
		{
			dest[i] = src[len];
			i++;
			len--;
		}
	}
	return (dest);
}
