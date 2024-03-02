#include <stdio.h>

int main()
{
    int sum = 0, num, i, temp, r;
   // printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if (num == sum)
        printf("Aromstom");
    else
        printf("Not Aromstom");

    return 0;
}