#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory allocated for a dog structure
 * @d: pointer to the dog structure to free
 *
 * Description: free the memory allocated for the given dog structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
