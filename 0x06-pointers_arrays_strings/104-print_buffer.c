#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - prints a buffer.
 * @b: is buffer
 * @size: is the buffer length
 *
 */
void print_buffer(char *b, int size)
{
	int i, j;
	int line_position_start = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
			{
				line_position_start = i;
				printf("%08x: ", line_position_start);
				for (j = i; j < i + 16; j += 2)
				{
					if (j < size)
						printf("%02x%02x ", b[j], b[j + 1]);
					else
						printf("     ");
				}
			}
			if (isprint(b[i]) != 0)
				printf("%c", b[i]);
			else
				printf(".");
			if ((i + 1) % 10 == 0)
				printf("\n");
		}
	}
	printf("\n");
}
