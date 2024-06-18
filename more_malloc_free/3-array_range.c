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
    /**
     * @counter: counts the number of ints from min to max
     * @i: the loop iterator
     * @array: the array of ints being initialized
     */
    int counter;
    int i;
    int *array;

    /**
     * failsafe: if min is less than max the function returns NULL\
     * else the counter is set to calculate the ints
     * max minus min, for the number of ints, plus 1 to include the min/max as endcaps
     */
    if (min > max)
    {
        return (NULL);
    }

    counter = max - min + 1;

    /**
     * utilizes malloc to allocate memory
     * calculates enough space for 'counter' amount of ints
     */
    array = malloc(sizeof(int) * counter);

    /**
     * if malloc is unsuccessful return NULL
     */
    if (array == NULL)
    {
        return (NULL);
    }

    /**
     * initializes the array
     * iterates min each time to go in order
     */
    for (i = 0; i < counter; i++)
    {
        array[i] = min;
        min++;
    }

    /**
     * returns a pointer to the new array
     */
    return (array);
}
