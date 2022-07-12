#include "main.h"
#include <stdlib.h>

/**
* rev_string - reverses a string.
* @s: string arg.
* Return: nothing.
*/

void rev_string(char *s)
{
	int len = 0, i = 0;
	char *s_cp;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	/* allocate mem to s_cp of lenght len */
	s_cp = (char *)malloc(len * sizeof(char));
	i = 0;
	--len;
	if (s_cp == NULL)
	{
		exit(0);
	}
	else
	{
		while (s[i] != '\0')
		{
			s_cp[i] = s[len];
			i++;
			len--;
		}
		i = 0;
	}
	while (s[i] != '\0')
	{
		s[i] = s_cp[i];
		i++;
	}
}
