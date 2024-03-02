#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (a = 0; a <= n; a++)
        printf("The seris is: %d\n", a);
    return 0;
}