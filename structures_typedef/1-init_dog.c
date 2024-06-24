#include "dog.h"
#include <stddef.h>

/**
* init_dog()- uses struct to data a dog
*
* @d: the dog in quesrion
* @name: name of pupper
* @age: age of doggo
* @owner: puppy people arent
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
