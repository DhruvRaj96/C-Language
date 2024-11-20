// Function WITH ARGUMENT and WITHOUT RETURN VALUE
#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < 5; i++)
    {

        printf("%c\n", '*');
    }
}
int main()
{
    printstar(3);
    printf("%c\n", '*');
    return 0;
}