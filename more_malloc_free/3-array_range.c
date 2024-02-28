#include "main.h"
#include <stdlib.h>

/**
 * array_range - aims to create array of ints, min to max
 *
 * @min: start value for int array
 * @max: end value for int array
 *
 * Return: pointer to array, NULL if failure or min > max
 */

int *array_range(int min, int max)
{
	int num;
	int k;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		num = max - min + 1;
	}

	arr = malloc(sizeof(int) * num);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < num; k++)
	{
		arr[k] = min + k;
	}

	return (arr);
}
