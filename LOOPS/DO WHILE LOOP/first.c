#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter Any Number\n");
    scanf("%d", &n);
    do
    {

        printf("%d\n", i + 1);
        i = i + 1;

    } while (i < n);

    return 0;
}