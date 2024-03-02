#include <stdio.h>

int main()
{
    int num1, num2, total;

    printf("Enter any two intiger number: ");
    scanf("%d %d", &num1, &num2);

    total = num1 + num2;
    printf("%d", total);
    return 0;
}