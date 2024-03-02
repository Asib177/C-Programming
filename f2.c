#include <stdio.h>

int palindromChecker(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return -1;
}

void evenChecker2(int r1, int r2)
{
    for (int i = r1; i <= r2; i++)
    {
        int flag = palindromChecker(i);
        if (flag == 1)
            printf("%d ", i);
        //     if (i % 2 == 0)
        //         printf("%d ", i);
    }
}

int main()
{
    int range1, range2;
    scanf("%d %d", &range1, &range2);
    evenChecker2(range1, range2);
    // for (int i = range1; i <= range2; i++)
    // {
    //     int flag = evenChecker(i);

    //     if (flag == 1)
    //         printf("%d ", i);
    // }

    return 0;
}