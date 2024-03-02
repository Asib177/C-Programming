#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);

    float avg;
    avg = (float)(a + b + c) / 3;
    printf("Average is: %.2f", avg);
    return 0;
}