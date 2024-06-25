#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure defining dog data
 *
 * @name: name data of dog
 * @age: age data of dog
 * @owner: data of dog's owners
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src)

#endif
