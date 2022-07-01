#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point of program
 * Description: program checks if random number is between zero and six
 * Return: 0 if successful, 1 otherwise
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);

	} else if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);

	} else if (last_digit > 0 && last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}

	return (0);
}
