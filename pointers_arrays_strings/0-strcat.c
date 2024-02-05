#include "main.h"
#include <string.h>

/**
 * *_strcat - aims to concatenate 2 strings overwriting a null byte to do so
 *
 * @s1 : the destination string 1
 * @s2 : the source string 2 which will appended to string 1
 *
 * Return : s1 the destination pointer
 */

char *_strcat(char *dest, char *src)
{
	/*declare variables for string length storage*/
	int dest_length;
	int src_length;
	
	/*runs while loop through 0 to null byte*/
	dest_length = 0;
	while 
		(*(dest + dest_length))
		dest_length++;
	
	/*copies over src string by character to dest starting at null byte*/
	for 
		(src_length = 0; *(src + src_length) != '\0'; src_length++, dest_length++)
			{
			*(dest + dest_length) = *(src + src_length);
			}
	*(dest + dest_length) = '\0';

	Return (dest);
}
