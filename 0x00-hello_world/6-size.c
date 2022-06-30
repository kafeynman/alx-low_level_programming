#include <stdio.h>

/**
 * main - prints size of types
 * @void: takes no arguments
 *
 * Description: Prints the size of int, char, long and float
 * Return: 0 if successful. 1 otherwise
 */
int main(void)
{
	printf("Size of a %s is: %d byte(s)\n", "char", sizeof(char));
	printf("Size of an %s: %d byte(s)\n", "int", sizeof(int));
	printf("Size of a %s: %d byte(s)\n", "long int", sizeof(long int));
	printf("Size of a %s: %d byte(s)\n", "long long int", sizeof(long long int));
	printf("Size of a %s: %d byte(s)\n", "float", sizeof(float));

	return (0);

}
