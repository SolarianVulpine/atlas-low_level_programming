#include <stdio.h>
#include "main.h"

/**
 * _isalpha - main entry point of this file
 *
 * Description: Will check character and return if memeber of alphabet
 *
 * @c: the character to be checked
 *
 * Return: 1 on alphabet, 0 otherwise, (success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
