#include <stdio.h>

/**
 * main - Print all arguments
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success
 */

int main(int argc, char *argv[])

{
    int i = 1;
    while (i < argc) 

    {

        printf("%s\n", argv[i]);
        i++;

    }
    return 0;
}
