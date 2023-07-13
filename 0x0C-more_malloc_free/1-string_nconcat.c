#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the allocated memory
 *         exit with status value of 98 if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    len1 = strlen(s1);
    len2 = strlen(s2);
    if (n >= len2)
        n = len2;
    result = malloc(len1 + n + 1);
    if (result == NULL)
        return (NULL);
    memcpy(result, s1, len1);
    memcpy(result + len1, s2, n);
    result[len1 + n] = '\0';
    return (result);
}
