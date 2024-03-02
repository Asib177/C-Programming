#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swiping value is:\n");
        printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}