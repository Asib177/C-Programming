#include <stdio.h>

int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);

    return 0;
}

void Func1(char a[])
{
    int i = 0, len = 0;
    while (a[i] != '\0')
    {
        i++;
        len++;
    }
    printf("%ld", len);
}