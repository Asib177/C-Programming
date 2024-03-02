#include <stdio.h>

int func(int, char);

int main()
{
    int n1, n2;
    scanf("%d %c", &n1, &n2);

    func(n1, n2);

    return 0;
}

int func(int a, char b)
{
    printf("Valur recieve from main: %d\n", a);
    printf("Valur recieve from main: %c\n", b);
}