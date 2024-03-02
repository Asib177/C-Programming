#include <stdio.h>
#include <math.h>

int reverseNumber(int num);

int main()
{
    int num, reverse;

    printf("Enter any number: ");
    scanf("%d", &num);

    reverse = reverseNumber(num);

    printf("Reverse of %d : %d", num, reverse);

    return 0;
}

int reverseNumber(int num)
{
    int digit = (int)log10(num);

    if (num == 0)
        return 0;

    return ((num % 10 * pow(10, digit)) + reverseNumber(num / 10));
}