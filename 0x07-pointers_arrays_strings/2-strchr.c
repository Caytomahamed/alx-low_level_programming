#include <stdio.h>

char *_strchr(char *s, char c)
{
	int len;
	int index;
	int n;

	len = 0;
	n = 0;
	index = -1;

	/*Calculte the length of string*/
	while(s[len] != '\0')
		len++;

	/*find index of character of c*/
	while(n < len)
	{
	    if(s[n] == c)
		{
			index = n;
			break;
		}
		n++;
	}

	/*if character is not found return NULL*/
	if(index == -1)
		return NULL;

	return s + index;
}
