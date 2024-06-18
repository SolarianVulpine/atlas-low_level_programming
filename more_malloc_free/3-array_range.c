#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -
 *
 * @min: first int in array
 * @max: last int in array
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
int counter;
int i;
int *array;

if (min > max)
{
return (NULL);
}
counter = max - min + 1;

array = malloc(sizeof(int) * counter);

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < counter; i++)
{
array[i] = min;
min++;
}

return (array);
}
