#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{

    int num1, num2, sum;
    printf("Enter The Number");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("the sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}