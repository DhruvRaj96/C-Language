#include <stdio.h>
#include <conio.h>

void main()
{
    int m, km;
    //clearerr();
    printf("enter distance in km");
    scanf("%d", &km);
    m = km * 1000;
    printf("distance in m is %d Meter", m, km);
    //getch();
    return 0;
}