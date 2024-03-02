#include <stdio.h>

int input();
int sum(int);
void display(int, int);

int input()
{
    int n;
    scanf("%d", &n);
    return n;
}

int sum(int num)
{
    int r = 0;
    for (int i = 1; i <= num; i++)
    {
        r = r + i;
    }
    return r;
}

void display(int n, int sum)
{
    printf("1+2+3+....+%d+%d= %d", n - 1, n, sum);
}

int main()
{
    int range = input();
    int result = sum(range);
    display(range, result);

    return 0;
}