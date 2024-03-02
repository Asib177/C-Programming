#include <stdio.h>

int main()
{
    char s[1000];

    gets(s); // cart

    strlength(s); // >>> strlength("cart")
    return 0;
}

void strlength(char c[]) // >>  strlength("cart")
{
    int count = 0;

    while (c[count] != '\0') // \0 >> NULL
    {
        count++;
    }
    printf("len = %d", count);
}