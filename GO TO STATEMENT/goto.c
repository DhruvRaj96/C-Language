#include <stdio.h>

int main()
{
label:
    printf("We are inside lebel");
    goto label;
end:
    printf("We are inside end");
    goto end;
    return 0;
}