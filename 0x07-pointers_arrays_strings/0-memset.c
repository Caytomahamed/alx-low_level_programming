/**
* _memset - is a function that is used to set a block of memory
* to specified value
*
* @s: is pointer to the block of memory that need to be set
* @b: is value to which the memory should set
* @n: is number of bytes to be set
*
* Return: pointer s:
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
