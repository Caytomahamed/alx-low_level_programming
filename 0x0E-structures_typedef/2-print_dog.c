#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print information about a dog
 * @d: pointer to the dog structure to print
 *
 * Description: print the name, age, and owner of the given dog structure
 */
void print_dog(struct dog *d)
{
	
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Age: %f\n", d->owner);
}
