#include <stdio.h>

unsigned long long Findfact(int num);

int main()
{
    int num;
    unsigned long long factorial;

    printf("Enter any number: ");
    scanf("%d", &num);

    factorial = Findfact(num);

    printf("Factorial of %d is %llu", num, factorial);

    return 0;
}

unsigned long long Findfact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * Findfact(num - 1);
}