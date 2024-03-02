#include <stdio.h>
void Func(int);
int main()
{
    int n;
    scanf("%d", &n);
    Func(n);

    return 0;
}

void Func(int a)
{
    if (a < 0)
        printf("Negative");
    else if (a > 0)
        printf("Posative");
    else if (a == 0)
        printf("Zero");
}