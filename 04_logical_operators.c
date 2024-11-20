#include <stdio.h>

int main()
{
    // && (AND) OPERATORS. {FALSE}
    int a = 1;
    int b = 0;
    // printf("The value of a and b is %d\n.", a&&b);
    //{FALSE}
    /* int a = 0;
     int b = 0;
     printf("The value of a and b is %d\n.",a&&b);*/
    // {TRUE}
    /*int a = 1;
    int b = 1;
    printf("The value of a and b is %d\n.",a&&b);*/
    if (a && b)
    {
        printf("both are true");
    }
    // or it can also be written as
    if (a)
    {
        if (b)
        {
            printf("both are true");
        }
    }

    // || (OR) OPERATORS. {FALSE}
    /*int a = 0;
    int b = 0;
    printf("The value of a or b is %d\n.", a || b);*/
    //{TURE}
    /*int a=1;
    int b = 0;
    printf("The value of a or b is %d \n.",a||b);*/
    /*int a=1;
    int b=1;
    printf("The value of a or b is %d\n.",a||b);*/
    // ! (NOT) OPERATORS { TRUE ko FALSE me convert}
    /*int a = 1;
    printf("The value of not(a) is %d\n.",!a);*/
    //! (NOT) OPERATORS {FALSE ko TRUE me convert}
    int a = 0;
    printf("The value of not(a) is %d\n", !a);

    return 0;
}