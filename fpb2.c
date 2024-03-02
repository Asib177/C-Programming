#include <stdio.h>
int primeChecker(int);
int arromstomChecker(int);

int primeChecker(int a)
{
    if (a == 0 || a == 1)
        return -1;

    int count = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            count++;
            break;
            return -1;
        }
        
    }
    return 1;
}

// int arromstomChecker(int a)
// {
//     int temp = a, r, sum = 0;
//     while (temp != 0)
//     {
//         r = temp % 10;
//         sum = sum + r *r *r;
//         temp = temp / 10;
//     }
//     if (sum == a)
//         return 1;
//     else
//         return -1;
// }

int main()
{
    int n;
    scanf("%d", &n);
    int chk1 = primeChecker(n);
    if (chk1 == 1)
        printf("Prime");
    if (chk1 == -1)
        printf("Not Prime");
    // int chk2 = arromstomChecker(n);
    // if (chk2 == 1)
    //     printf("Arromstom");
    // else
    //     printf("Not Arromstom");
    // if (chk1 == 1 && chk2 == 1)
    //     printf("Prime and Arromstom Number");

    return 0;
}