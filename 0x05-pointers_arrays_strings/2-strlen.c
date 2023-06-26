/**
 * _strlen - Get length of string
 * @s: is string that count is length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			len = i;
		}

		if (len > 0)
			len += 1;
	}

	return (len);
}
