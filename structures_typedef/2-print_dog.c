#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog()- prints a dog
 * @d: the dog that needs a printin
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{
	char nil[5] = "(nil)";

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", nil);
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", nil);
		}
	}
}