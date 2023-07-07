# Static libraries
A static library is a collection of object files that are linked with a program at compile time. The resulting executable contains a copy of the library code, which is loaded into memory when the program starts. Static libraries are used to reduce the size of executable files, and they can improve the performance of large programs by reducing the time it takes to load and link external libraries.

## Creating a static library
To create a static library, you first need to compile the source code into object files. You can do this by using a compiler such as GCC and the -c flag, which tells the compiler to generate object files instead of executables. For example:

```
$ gcc -c foo.c bar.c baz.c
```

This command compiles the source files foo.c, bar.c, and baz.c into object files foo.o, bar.o, and baz.o.

After you have compiled the object files, you can use the ar command to create a static library. The ar command is used to create, modify, and extract files from archives. To create a static library, you use the ar command with the rcs options, which specify that you want to create a new archive, add the object files to the archive, and create an index for the archive. For example:

```
$ ar rcs libmylib.a foo.o bar.o baz.o
```

This command creates a new archive file libmylib.a and adds the object files foo.o, bar.o, and baz.o to the archive.

## Using a static library
To use a static library in your program, you need to link the library with the program at compile time. You can do this by using the -l flag followed by the name of the library file (without the lib prefix and the .a extension) when you compile your program. For example:

```
$ gcc -o myprogram myprogram.c -L. -lmylib
```

This command compiles the source file myprogram.c and links it with the static library libmylib.a. The -L. option tells the linker to look for the library file in the current directory.

## Conclusion
Static libraries are a powerful tool for reducing the size of executable files and improving the performance of large programs. By following the steps outlined in this README, you can create and use static libraries in your own programs.
