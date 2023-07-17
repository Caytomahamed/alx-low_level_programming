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

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (0)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
