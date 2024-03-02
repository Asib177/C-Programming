#include <stdio.h>
void sumFunc(int, int, int);

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    int sum = n1 + n2 + n3;
    printf("Sum is main: %d\n", sum);
    sumFunc(n1, n2, n3);

    return 0;
}
void sumFunc(int a, int b, int c)
{
    int sum = 0;
    sum = a + b + c;
    printf("Sum in Function: %d\n", sum);
}
