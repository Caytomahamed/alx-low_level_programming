# argc, argv
In C and C++ programming languages, argc and argv are common terms used in the signature of the main function. They are used to pass command-line arguments to the program.

## What is argc?
argc stands for "argument count." It is an integer value that represents the number of command-line arguments passed to the program. The value of argc is always at least 1, since the first argument is the name of the program itself.

## What is argv?
argv stands for "argument vector." It is a pointer to an array of strings, where each string represents a command-line argument passed to the program. The first string (argv[0]) is always the name of the program itself.

## How to use argc and argv?
Here is an example of how to use argc and argv in a program:

```
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc - 1);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

In this program, we use argc to determine the number of command-line arguments passed to the program. We use argv[0] to print the name of the program and a loop to print the remaining arguments.

## Conclusion
argc and argv are useful tools for passing command-line arguments to a program. By using them, you can make your program more flexible and customizable.
