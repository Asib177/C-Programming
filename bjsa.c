#include <stdio.h>

int main()
{
    char str[1000], ch;
    gets(str);

    int i = 0, count = 0;
    while ((ch = str[i]) != '\0')
    {
        if (ch == ' ')
            count++;

        i++;
    }
    printf("%d", count);

    return 0;
}