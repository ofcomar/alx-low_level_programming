#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cnt, con = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cnt = atoi(argv[1]);

	while (cnt > 0)
	{
		con++;
		if ((cnt - 25) >= 0)
		{
			cnt -= 25;
			continue;
		}
		if ((cnt - 10) >= 0)
		{
			cnt -= 10;
			continue;
		}
		if ((cnt - 5) >= 0)
		{
			cnt -= 5;
			continue;
		}
		if ((cnt - 2) >= 0)
		{
			cnt -= 2;
			continue;
		}
		cnt--;
	}

	printf("%d\n", con);

	return (0);
}
