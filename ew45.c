#include <stdio.h>

int main()
{
    int arr[] = {24, 77, 117, -512, 1024};
    // int n;
    // scanf("%d", &n);
    int result = func1(arr);
    printf("%d", &result);
    return 0;
}
int func1(int a[])
{

    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
            return i;
    }
}