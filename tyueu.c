#include <stdio.h>
void isEvenOdd(int);

int main()
{
    int n;
    scanf("%d", &n);

    isEvenOdd(n);
    return 0;
}
void isEvenOdd(int a)
{
    if (a % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}