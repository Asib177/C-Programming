#include <stdio.h>

int palindromchecker(int a)
{
    int rev = 0;
    int temp = a;
    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == a)
        return 1;
    else
        return -1;
}
int main()
{
    int range1, range2;
    scanf("%d %d", &range1, &range2);

    for (int i = range1; i <= range2; i++)
    {
        int flag = palindromchecker(i);
        if (flag == 1)
            printf("%d ", i);
    }
    return 0;
}