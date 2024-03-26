// #include <stdio.h>

// int main()
// {
//     int a = 21;
//     int b = 15;
//     int c = 34;
//     int d = 6;

//     int result = a * b + (a - c) / d + b;

//     printf("%d * %d + (%d - %d) / %d + %d = %d", a, b, a, c, d, b, result);

//     return 0;
// }

#include <stdio.h>
int main()
{
    float a = 2.3;
    float b = 5.8;
    float c = 1.1;
    float d = 3.5;
    float result = (a + b - c) * d - a / d;

    printf("(%.5f + %.5f - %.5f) * %.5f - %.5f / %.5f = %.5f", a, b, c, d, a, d, result);

    return 0;
}