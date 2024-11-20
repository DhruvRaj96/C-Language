// Function WITHOUT ARGUMENT and WITH RETURN VALUE
#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter A Number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    printf("The Enterd Number Is %d\n", c);

    return 0;
}