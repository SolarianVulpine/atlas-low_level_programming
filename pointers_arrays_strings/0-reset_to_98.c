#include "main.h"

/**
 * reset_to_98 - this code will update a pointer's value
 *
 * Description: used variable declarations to change a provided 
 * value to equal 98 regardless of original value
 *
 * @n: this is the provided pointer
 *
 * Return: Always 0 on success
 */

void reset_to_98(int *n)
{
	int i = 98;
	*n = i;
}

