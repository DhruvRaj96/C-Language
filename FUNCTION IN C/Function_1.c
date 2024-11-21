// Function With ARGUMENT and With RETURN VALUE

#include <stdio.h>
/*int sum(int a, int b)
{
    return a + b;
}*/
int sum(int a, int b);
int main()
{
    int a, b, c;
    a = 5;
    b = 9;
    c = sum(a, b);
    printf("The Sum is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}