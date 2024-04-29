#include <stdio.h>

int main()
{
    int num, y;
    scanf("%d", &num);

    // y = (num > 5) ? 10 : 15;

    (num > 5) ? (y = 10) : (y = 15);

    printf("%d\n", y);

    return 0;
}
