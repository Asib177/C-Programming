#include <stdio.h>

int main()
{
    int r, num, temp, sum = 0;
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    if (num == sum)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}