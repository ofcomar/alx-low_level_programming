#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch_ar;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch_ar = 'a'; ch_ar <= 'f'; ch_ar++)
	{
		putchar(ch_ar);
	}
	putchar('\n');
	return (0);
}
