#include <stdio.h>

int func1(int, int);
void func2(int, int);

int main()
{
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    int result = func1(var1, var2);
    printf("%d\n", result);

    func2(var1, var2);

    return 0;
}

int func1(int a, int b)
{
    return a + b;
}
void func2(int a, int b)
{
    printf("%d\n", a - b);
}