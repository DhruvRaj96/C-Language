#include <stdio.h>
// In this program we are going to make a function of sum so that we
// dont have to write the program again and again function
//  helps the programmers to not to write a simillar program again and again

// Function prototype
int sum(int, int);
// Function defintion
int sum(int x, int y)
{
    // printf("The sum of x and y is %d\n", x + y);
    return (x + y);
}
int main()
{
    int a = 1;
    int b = 2;
    // int c = a + b;
    // printf("The sum of a and b is %d\n", c);
    int c = sum(a, b); // funtion call
    printf("The sum is %d\n", c);

    int a1 = 5;
    int b1 = 23;
    // int c1 = a1 + b1;
    // printf("The sum of a1 and b1 is %d\n", c1);
    int c1 = sum(a1, b1); // funtion call
    printf("The sum is %d\n", c1);
    int a2 = 58;
    int b2 = 23;
    // int c2 = a2 + b2;
    // printf("The sum of a2 and b2 is %d\n", c2);
    int c2 = sum(a2, b2); // funtion call
    printf("The sum is %d\n", c2);
    return 0;
}