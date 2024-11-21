#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n", age);
    scanf("%d", &age);
    printf("Enter your marks\n", marks);
    scanf("%d", &marks);

    switch (age)
    {
    case 15:
        printf("The age is 15\n");
        switch (marks)
        {
        case 50:
            printf("Your marks is 50\n");
            break;

        default:
            printf("Your marks is not 50");
        }
        break;
    case 3:
        printf("The age is 3\n");
        break;
    case 8:
        printf("The age is 8\n");
        break;
    case 10:
        printf("The age is 10\n");
        break;
    default:
        printf("Age is not in above of them\n");
        // break;
    }

    return 0;
}