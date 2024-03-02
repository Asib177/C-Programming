#include <stdio.h>

int main()
{

    // int n;
    // scanf("%d", &n);

    int r1, r2;
    scanf("%d %d", &r1, &r2);

    for (int n = r1; n <= r2; n++)
    {
        if (n % 2 != 0)
            break;
        printf("%d ! = ", n);
        int fac = 1;
        for (int i = n; i >= 1; i--)
        {
            fac *= i;
            printf("%d", i);
            if (i > 1)
                printf(" X ");
        }

        printf(" = %d\n", fac);
    }
    return 0;
}