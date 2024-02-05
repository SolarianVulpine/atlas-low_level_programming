#include "main.h"
#include <string.h>

/**
 * *_strcat - aims to concatenate 2 strings overwriting a null byte to do so
 *
 * @dest : the destination string 1
 * @src : the source string 2 which will appended to string 1
 *
 * Return : dest the destination pointer
 */

char *_strcat(char *dest, char *src)
{
	/*declare variables for string length storage*/
	int dest_length = 0;
	int src_length = 0;

	/*runs while loop through 0 to null byte*/
	while
		(*(dest + dest_length))
		dest_length++;

	/*copies over src string by character to dest starting at null byte*/
	for
		(*(src + src_length) != '\0'; src_length++, dest_length++)
			{
			*(dest + dest_length) = *(src + src_length);
			}
	*(dest + dest_length) = '\0';

	return (dest);
}
