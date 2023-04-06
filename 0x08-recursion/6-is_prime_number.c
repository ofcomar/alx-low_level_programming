#include "main.h"

/**
 * is_Prime - helper function for is_prime_number
 * @a: input number
 * @b: iterator
 * Return: 1 if true, 0 if false
 */
int is_Prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0)
		return (0);
	return (is_Prime(a, b - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input number
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (is_Prime(n, n - 1));
}
