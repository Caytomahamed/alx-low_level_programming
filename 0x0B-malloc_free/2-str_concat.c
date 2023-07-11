#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two memory blocks
 * @s1: the source memory block
 * @s2: the source memory block
 *
 * Return: a pointer to the new concatenated memory block,
 * or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	char *new_string, *start_string;

	/*if pass Null treate like empty string */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* get length of two string */
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	new_string = malloc(s1_len + s2_len);

	/* if there error malloc  */
	if (!new_string)
		return (NULL);

	/* start start address of pointer  */
	start_string = new_string;

	/* copy to malloc block of address into s1 and s2  */
	while (*s1 != '\0')
		*new_string++ = *s1++;

	while (*s2 != '\0')
		*new_string++ = *s2++;

	new_string = '\0';


	return (start_string);
}
