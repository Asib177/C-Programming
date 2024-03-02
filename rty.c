#include <stdio.h>
int evenoddchecker(int);

int main()
{
    int n;
    scanf("%d", &n);

    int result = evenoddchecker(n);
    if (result == 1)
        printf("Even");
    else
        printf("Odd");

    return 0;
}

int evenoddchecker(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return -1;
}
