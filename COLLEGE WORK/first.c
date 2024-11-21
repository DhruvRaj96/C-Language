#include <stdio.h>

int main()
{
    int m, km;
    printf("Enter The Distance In KM");
    scanf("%d", &km);
    int m = km * 1000;
    printf("Distance In m is %d", m, km);
    getch();
    return 0;
}
