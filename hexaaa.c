#include <stdio.h>
#define N 100

int main()
{
    int temp, num, rem, i, j;
    char hexa[N];
    printf("Enter eny number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        rem = temp % 16;
        if (rem < 10)
            rem = rem + 48;
        else
            rem = rem + 55;
        hexa[i++] = rem;
        temp = temp / 16;
    }

    printf("Hexadecimal Number: ");
    for (j = i - 1; j > 0; j--)
    {
        printf("%c", hexa[j]);
    }

    return 0;
}