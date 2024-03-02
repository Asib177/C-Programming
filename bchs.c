#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    printf("%d", len);

    return 0;
}
