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
	char *nil = "(nil)";

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", *nil);

	printf("Age: %f\n", d->age);

	if(d->owner != NULL)
		printf("Age: %S\n", d->owner);
	else
		printf("Age: %S\n", *nil);
}
