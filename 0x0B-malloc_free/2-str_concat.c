#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strut;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	strut = malloc(sizeof(char) * (a + b + 1));

	if (strut == NULL)
	{
		free(strut);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		strut[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, b++)
		strut[k] = s2[b];

	return (strut);
}
