#include <stdio.h>

int main()
{
    int i = 10; // Declare and initialize i with 10(single variables)
    int j = i; // Declaring that i is equal to j
    int a = 5, b = 6, c = 7, d = 9; // declare and initialize multiple variables
    // %d is called format specifier
    // %d is for int ,
    // %f is for float,
    // %c is for char
    printf("The value of i is %d and the value of j is %d\n", i, j);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    printf("The value of c is %d and the value of d is %d\n", c, d);

    return 0;
}