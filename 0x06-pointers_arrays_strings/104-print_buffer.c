#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
    int i, j;
    int line_position_start = 0;

    for (i = 0; i < size; i++)
    {
        /*Each line starts with the position of the first byte of the line in hexadecimal(8 chars)starting with 0*/
        if (i % 10 == 0)
        {
            line_position_start = i;
            printf("%08x: ", line_position_start);

            /*Each line shows the hexadecimal content(2 chars) of the buffer, 2 bytes at a time, separated by a space*/
            for (j = i; j < i + 16; j += 2)
            {
                if (j < size)
                    printf("%02x%02x ", b[j], b[j + 1]);
                else
                    printf("     ");
            }
        }
        /*The output should print 10 bytes per line*/
        if (isprint(b[i]) != 0)
            printf("%c", b[i]);
        else
            printf(".");

        /*Each line shows the content of the buffer.If the byte is a printable character, print the letter, if not, print.*/

        /*Each line ends with a new line*/
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    printf("\n");
    /*If size is 0 or less, the output should be a new line only \n */
}
