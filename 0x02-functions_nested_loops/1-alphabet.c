#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
int putchar(char _putchar)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
	return (0);
}
int main(void)
{
	 print_alphabet();
	 return(0);
}
