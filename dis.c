#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;

    for (int j = i; j >= -1; j--)
    {
        if (str[j] != ' ' && j != -1)
        {
            count++;
        }
        else
        {
            for (int k = j + 1; count > 0; count--)
            {
                printf("%c", str[k]);
                k++;
            }
            printf(" ");
        }
    }
}