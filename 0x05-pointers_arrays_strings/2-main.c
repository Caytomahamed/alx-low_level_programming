#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    char *str2;
    int len;
    int len1;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);

    str2 = "";
    len1 = _strlen(str2);
    printf("%d\n", len1);
    return (0);
}
