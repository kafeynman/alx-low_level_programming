#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - generates random valid password
* Return: 0 (always)
*/

int main(void)
{
	int ran_num = 0, cnt;
	time_t t = 0;

	srand(time(t));
	for (cnt = 0; cnt < 100; cnt++)
	{
		ran_num = rand();
	}

	printf("%c\n", ran_num);

	return (0);
}
