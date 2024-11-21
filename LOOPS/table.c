#include <stdio.h>

int main()
{
    int i, n;
    i = 1;
    printf("Enter the Number for it table:\n");
    scanf("%d", &n);
    /*for (i = 1; i <= 10; i++)
    {
        printf("%d * %d =%d\n", n, i, n * i);
    }*/

    /* while (i <= 10)
     {
         printf("%d * %d =%d\n", n, i, n * i);
         i++;
     }*/
    do
    {
        printf("%d * %d =%d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}