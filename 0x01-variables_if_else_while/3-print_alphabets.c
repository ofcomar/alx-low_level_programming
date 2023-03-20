#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase,
 *
 *followed by a new line good girl 
 * 
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch_ar;

	for (ch_ar = 'a'; ch_ar <= 'z'; ch_ar++)
		putchar(ch_ar);
	for (ch_ar = 'A'; ch_ar <= 'Z'; ch_ar++)
		putchar(ch_ar);
	putchar('\n');
	return (0);
}
