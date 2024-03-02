#include <stdio.h>




// void recure1(int a)
// {
//     if (a == 1)
//     {
//         printf("%d ", a);
//         return;
//     }

//     recure1(a - 1);
//     // printf("%d ", a);

//     if (a % 2 != 0)
//         printf("+ %d ", a);
//     if (a % 2 == 0)
//         printf("* %d ", a);
// }

int main()
{
    int n;
    scanf("%d", &n);

    recure1(n);
}
