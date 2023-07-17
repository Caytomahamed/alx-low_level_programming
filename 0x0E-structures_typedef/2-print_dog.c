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
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
