# C - Preprocessor
---
![meme](https://miro.medium.com/v2/resize:fit:960/1*Nv6wUqCD77n6Qx2IJBqjmg.gif)
## Understanding C program Compilation Process
When you write a C program, you need to compile it before you can run it. The compilation process involves several steps, including preprocessing, compiling, and linking. Understanding these steps is important for writing efficient and error-free C code.

## Preprocessing
Before a C program can be compiled, it needs to be preprocessed. The preprocessing step involves processing the source code to expand macros, include header files, and perform other transformations on the code. The preprocessor is a separate program that is invoked by the C compiler.

## Object-like Macros
Object-like macros are a feature of the C preprocessor that allow you to define a name that represents a value or a sequence of statements. When the preprocessor encounters the name in the code, it replaces it with the corresponding value or statements. Object-like macros are defined using the #define directive.

### Example
```
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    double radius = 5.0;
    double area = PI * SQUARE(radius);

    printf("The area of a circle with radius %f is %f\n", radius, area);

    return 0;
}
```

## Macro Arguments
Macro arguments allow you to pass values to a macro when it is expanded. Macro arguments are specified in parentheses after the macro name. Inside the macro definition, the arguments are referred to using placeholders called parameter names. Macro arguments can be any valid C expression.

### Example
```
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10;
    int y = 20;
    int max_value = MAX(x, y);

    printf("The maximum value of %d and %d is %d\n", x, y, max_value);

    return 0;
}
```

## Preprocessor Directives in C
Preprocessor directives are special commands that are processed by the C preprocessor. Preprocessor directives start with the # symbol and are not terminated by a semicolon. Some common preprocessor directives in C include #define, #include, and #ifdef.

### Example
```
#include <stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG
    printf("Debugging information\n");
#endif

    printf("Hello, world!\n");

    return 0;
}
```

## The C Preprocessor
The C preprocessor is a separate program that is invoked by the C compiler. The preprocessor reads the source code and performs various transformations on it, such as expanding macros, including header files, and removing comments. The preprocessor output is then passed to the compiler for compilation.

## Standard Predefined Macros
The C preprocessor defines several standard predefined macros that provide information about the compiler and the target platform. For example, the __FILE__ macro expands to the name of the current source file, and the __LINE__ macro expands to the current line number in the source file.

## Include Guard
Include guards are a technique used to prevent multiple inclusions of the same header file in a C program. Include guards are implemented using preprocessor directives to check whether a header file has already been included in the program. If the header file has already been included, the preprocessor skips it.

### Example
```
#ifndef MY_HEADER_H
#define MY_HEADER_H

/* Header file contents go here */

#endif /* MY_HEADER_H */
```

## Common Predefined Macros
In addition to the standard predefined macros, many compilers define their own set of predefined macros. These macros provide information about the compiler, the target platform, and other system-specific details. Some common predefined macros include _WIN32, which is defined on Windows platforms, and __GNUC__, which is defined when using the GCC compiler.

## Conclusion,
In conclusion, understanding the C program compilation process, object-like macros, macro arguments, preprocessor directives, and predefined macros is essential for writing efficient and portable C code. These concepts are fundamental to the C programming language and are used extensively in real-world C programs.

## Reference
- [Understanding C program Compilation Process (Watch)](https://youtu.be/VDslRumKvRA)
- [Object-like Macros (Read)](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments (Read)](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C (Watch)](https://youtu.be/X6HiYbY3Uak)
- [The C Preprocessor (Read)](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros (Read)](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [include guard (Read)](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros (Read)](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)
