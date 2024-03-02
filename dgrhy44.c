#include <stdio.h>

void dectoBin(int a)
{

    if (a == 0)
    {
        return;
    }
    int digit = a % 2;
    dectoBin(a / 2);
    printf("%d", digit);
}

int main()
{
    int value;
    printf("Enter Binary Number: ");
    scanf("%d", &value);
    dectoBin(value);

    return 0;
}