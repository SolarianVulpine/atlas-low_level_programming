#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this function will get the sum of it's parts
 *
 * @argc: how many args
 * @argv: array of arg values
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
    int i;
    int sum;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }    

    for(i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }
        sum = sum + atoi(argv[i]);
    }
    printf("%d\n", sum);

    return (0);
}