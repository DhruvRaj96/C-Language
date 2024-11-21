#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age\n", age);
    scanf("%d", &age);
    printf("You Have Entered %d As Your Age\n", age);
    if (age > 18)
    {
        printf("Your Can Drive\n");
    }
    else if (age == 18)
    {
        printf("Now, You Are Eligible For Drive");
    }
    else
    {
        printf("You Can't Drive\n");
    }

    return 0;
}