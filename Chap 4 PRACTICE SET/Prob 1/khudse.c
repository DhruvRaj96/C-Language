#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i < 10; i++)
    {
        printf("%d X %d=%d\n", t, i, t * i);
    }

    return 0;
}