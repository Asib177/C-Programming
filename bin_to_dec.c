#include <stdbool.h>

int main()
{
    int binary;
    printf("Enter Binary Number: ");
    scanf("%d", &binary);

    int decimal = 0, num = binary, rem, base = 1;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal Number is: %d", decimal);

    return 0;
}