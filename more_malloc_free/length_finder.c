#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* length_finder - homebrew strlen function for string length
*
* @string: the string to get the length from
*
* Return: the string's length
*/

int length_finder(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; )
	{
		i++;
	}

		return (i);
}