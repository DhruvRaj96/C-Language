#include <stdio.h>

int main()
{
    // In c language only non zero input will be executed and gives output and the value zero will not be executed and there will be no any output.
    if (2)
    {
        printf("This if with value 2 will be executed\n.");
        if (2319854)
        {
            printf("This if with value 2654984 will also be executed\n.");
        }
        if (21.5)
        {
            printf("This if with float value 21.5 will also be executed\n.");
        }
        if (0)
        {
            printf("Thif if with value zero will not be executed\n.");
        }
    }
    return 0;
}