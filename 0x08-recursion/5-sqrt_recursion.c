#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */
int sqt_cck(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqt_cck(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqt_cck(1, n));
}
