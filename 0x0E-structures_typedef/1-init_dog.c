#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a dog structure
 * @d: pointer to the dog structure to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: initialize a dog structure with the given name, age, and owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if(!*name || !age || !*owner)
        return;

    d = malloc(sizeof(struct dog));

    d->name = name;
    d->age = age;
    d->owner = owner;
}
