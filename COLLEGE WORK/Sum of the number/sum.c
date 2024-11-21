#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, sum;
    printf("Enter any two Number");
    scanf("%d  %d", &num1, &num2);

    //printf("Enter 2 Number");
    //scanf("%d", &num1);
    sum = num1 + num2;
    printf("%d %d = %d", num1, num2, sum);
    getch();
}