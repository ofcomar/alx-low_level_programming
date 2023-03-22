include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

int _isalpha(int c)
{
	if (c > 'a' && c > 'z' )
	{
		return (1);
	}
	else if(c > 'A' && c > 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
