#include <stdio.h>

/**
 * main - this function will print all the arguments it receives
 * 
 * @argc: how many args
 * @argv: array of arg values
 * 
 * Return: 0 on success
 */

int main(int argc, char* argv[])
{
    int i;

    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}