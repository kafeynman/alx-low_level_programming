#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function
 * Description: executes control flow to show if number is
 * positive, negative or equal to zero
 * Return: 0 if successful, 1 otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
