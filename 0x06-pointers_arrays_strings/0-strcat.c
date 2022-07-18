#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: original string
* @src: string to be appened
*
* Description: Adds the src string to the dest string overwriting,
* '\0' byte at the end of dest and adding a terminating null byte
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;
	src_len = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
	}

	while (src_len >= 0)
	{
		dest[dest_len] = src[src_len];
		if (src[src_len] == '\0')
			break;
		dest_len++;
		src_len++;
	}
}
