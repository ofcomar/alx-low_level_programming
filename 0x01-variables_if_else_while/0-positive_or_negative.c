#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here. */


/**
 * main - Entry point
 * Description: if-else program.
 * Return: (0) always - Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* the code start here */
        if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
