/**
 * _strcat - Cat function
 * @dest: destination
 * @src: source
 *
 * Return: Resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	/*Move the pointer to the end of dest */
	while (*p != '\0')
	{
		p++;
	}

	/* Append src to dest*/
	while (*src != '\0')
	{
		*p++ = *src++;
	}

	/*Add a terminating null byte*/
	*p = '\0';
	return (dest);
}
