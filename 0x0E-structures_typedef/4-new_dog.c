#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog structure
 *
 * Description: allocate memory for a new dog structure, and initialize it
 *              with the given name, age, and owner values
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
