#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", &str);

    int i, j, k;
    int count = 0;
    int maxcount = 0;
    char maxChar;
    for (i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            maxChar = str[i];
        }
    }

    printf("%c", maxChar);

    return 0;
}