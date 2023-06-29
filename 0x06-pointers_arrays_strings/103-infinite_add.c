#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Add two number
 * @n1: number 1
 * @n2: number 2
 * @r: stored result
 * @size_r: lenght of store result
 *
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = (len1 > len2) ? len1 : len2;
	int i, digit1, digit2, sum;

	if (max_len >= size_r)
	{
		return (0);
	}

	r[max_len] = '\0';

	for (i = max_len - 1; i >= 0; i--)
	{
		digit1 = (i >= len1) ? 0 : n1[i] - '0';
		digit2 = (i >= len2) ? 0 : n2[i] - '0';
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[i] = sum % 10 + '0';
	}

	if (carry)
	{
		if (max_len + 1 >= size_r)
		{
			return (0);
		}
		memmove(r + 1, r, max_len + 1);
		r[0] = carry + '0';
	}

	return (r);
}
