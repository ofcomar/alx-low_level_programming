#include <stdio.h>
/**
* main - Prints the alphabet in lowercase no e and q.
 *
 * Return: 0 good girl
 */

int main(void)
{

int n = 97;
while (n <= 122)
{
	if (n == 101 || n == 113)
	{
	n++;
        continue; 
        }
        putchar(n);
        n++;
        }
        putchar('\n');

        return (0);

}

