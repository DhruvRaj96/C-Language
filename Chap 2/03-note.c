#include <stdio.h>
int main()
{
    int a = 4;
    int b = 5;
    int z;
    z = a + b; // allowed and legal
    int z;
    z = a * b; // allowed and legal
    a*b = z; // not allowed and illegal 
    int i = ab; // in-valid
    int i = a*b // valid
    return 0;
}