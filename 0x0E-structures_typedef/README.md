## C - Structures, typedef
This project covers the use of structures and typedef in C programming.

## Description
Structures are a way to group related data together under a single name. They can be used to define custom data types that can be passed to functions, stored in arrays, and more. In this project, we will explore the different ways to define and use structures in C.

The typedef keyword is used to create a new name for an existing data type. It can be used to simplify complex type definitions and make code easier to read and understand. We will cover the use of typedef to define custom data types based on structures.

## Topics Covered
- Defining structures and their members
- Initializing structures
- Accessing structure members
- Passing structures to functions
- Using typedef to define custom data types
- Combining typedef and structures to create custom data types

## Requirements
To run the code in this project, you will need a C compiler such as GCC or Clang, and a text editor or integrated development environment (IDE) such as Visual Studio Code or Xcode.

# Examples
Here are some examples of the code covered in this project:
```
#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

int distance(point a, point b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    point p1 = {1, 2};
    point p2 = {4, 6};
    int d = distance(p1, p2);
    printf("Distance: %d\n", d);
    return 0;
}
```

In this example, we define a custom data type named point using typedef and a structure that contains two integers. We then define a function that calculates the distance between two points, and use it to calculate the distance between two point variables. The result is printed to the console using printf.

