#include <stdio.h>

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    if (a >= 0)
        printf("%d is posative", a);
    else
        printf("%d is negative", a);
    return 0;
}