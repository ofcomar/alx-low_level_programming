#include "main.h"
/**
 
 * _memset -  fill memory with a constant byte 
 * @s: pointer to char
 * @b: data to change
 * @n: index
 
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	for (a = 0 ; a < n ; a++ )
	{
		s[a] = b;
	
	}
	return s;
}
