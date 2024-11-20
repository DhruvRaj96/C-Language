#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 4)
         /*{
             break; // exit the loop now at an instant iteration

         }*/ 
        continue; //Skip this iteration now then go 
        printf("i is %d\n", i);
    }
    printf("Your loop is done now!");

    return 0;
}