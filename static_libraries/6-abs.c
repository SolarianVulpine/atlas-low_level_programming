#include <stdio.h>
#include "main.h"

/**
 * _abs - the main entry point of my code
 *
 * Description: computes the absolute value of an int
 *
 * @i: the integer to be checked by this code
 *
 * Return: Always 0 (or maybe the values)
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
