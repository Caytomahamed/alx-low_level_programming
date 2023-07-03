/**
* _memcpy - used to copy a block of memory from one location
* to another.
* @dest: is pointer to the memory location where the block
* memory should be copied.
* @src: is pointer to the memory location from which the
* block of memory should be memory.
* @n: is the number of bytes to be copied.
*
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++  = src[i];
	}

	return (dest);
}
