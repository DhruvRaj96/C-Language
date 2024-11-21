#include <stdio.h>

int main()
{
    int i, j;
    i = 1;
    while (i <= 6)
    {
        i++;
        j = 1;
        while (j <= 2)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
    }

    return 0;
}