#include <stdio.h>

int main()
{
    int r;

    printf("Enter radius: ");
    scanf("%d", &r);

    float pi = 3.14159;

    float area = pi * (r * r);

    printf("Area = %.5f", area);  // 78.53975

    return 0;
}