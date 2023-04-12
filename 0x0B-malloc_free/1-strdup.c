#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	char *ntr;
	unsigned int ln, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	ln = 0;
	while (str[ln] != '\0')
	{
		ln++;
	}

	ntr = malloc(sizeof(char) * (ln + 1));

	/*check if malloc was successful*/
	if (ntr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ln; i++)
	{
		ntr[i] = str[i];
	}
	ntr[ln] = '\0';
	return (ntr);

}
