#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - computes and prints the diagonals sums of a square matrix
 *
 * @a: pointer to the integer array representing the square matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int left_sum = 0;
    int right_sum = 0;
    int index;

    for (index = 0; index < size; index++)
    {
        left_sum += a[index * (size + 1)];
    }

    for (index = size - 1; index >= 0; index--)
    {
        right_sum += a[index * size + (size - index - 1)];
    }

    printf("%d, %d\n", left_sum, right_sum);
}
