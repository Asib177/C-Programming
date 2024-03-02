#include <stdio.h>

int main()
{
    int a, b, c;
    float avg;
    printf("Enter any number:\n");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / (float)3;
    printf("Output is: %.2f", avg);

    return 0;
}