#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int num1 = input % 10;
    int num2 = input / 10;

    int output = num1 * 10 + num2;

    printf("Output: %d\n", output);

    return 0;
}
