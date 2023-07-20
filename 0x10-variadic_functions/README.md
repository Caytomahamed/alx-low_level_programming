#C - Variadic functions
This project contains examples and exercises related to variadic functions in C.

## What are variadic functions?
In C, a variadic function is a function that can accept a variable number of arguments. Variadic functions are declared with the ellipsis ... as the last parameter in the function declaration. The stdarg.h header provides the necessary macros and types to handle variable arguments in a safe and portable way.

## What is included in this project?
This project includes the following files:

variadic_functions.h: a header file that declares the functions implemented in variadic_functions.c.
variadic_functions.c: a source file that implements several variadic functions, including sum_them_all, print_numbers, and print_strings.
test.c: a source file that contains unit tests for the variadic functions.
How to use this project?
To use this project, you can include the variadic_functions.h header file in your own C program and call the variadic functions as needed. For example:

```
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum = sum_them_all(3, 1, 2, 3);
    printf("Sum = %d\n", sum);

    print_numbers(3, 10, 20, 30);

    print_strings(3, "Hello", "world", "!");

    return 0;
}
```
You can also run the unit tests in test.c by compiling and running the test executable:

```
$ gcc -Wall -Werror -pedantic -std=c11 -o test // variadic_functions.c test.c
```
The output of the tests should indicate whether the variadic functions are working correctly or not.

## References
Read or watch:
- ![stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- ![Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- ![Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)
