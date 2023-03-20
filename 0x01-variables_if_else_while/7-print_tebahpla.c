#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch_ar;

	for (ch_ar = 'z'; ch_ar >= 'a'; ch_ar--)
	{
		putchar(ch_ar);
	}
	putchar('\n');
	return (0);
}
