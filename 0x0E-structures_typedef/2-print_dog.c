#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

void print_dog(struct dog *d)
{
    if (d == NULL)
        d = malloc(sizeof(struct dog));

    printf("Name: %s\n", d->name);
    printf("Age: %f\n", d->age);
    printf("Age: %f\n", d->owner);
}
