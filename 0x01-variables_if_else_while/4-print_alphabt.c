#include <stdio.h>

/**
 * main - entry point of program
 * Description: Print alphabet in lower case without e and q
 * Return: 0 (succesfull), 1 (otherwise)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' || ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);

}
