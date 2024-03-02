#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);

    int i, j, k;
    for (i = 0; i < strlen(str); i++)
    {
        for (j = i + 1; j < strlen(str);)
        {
            if (str[i] == str[j])
            {
                for (k = j; k < strlen(str); k++)
                {
                    str[k] = str[k + 1];
                }
            }
            j++;
        }
    }

    printf("%s", str);

    return 0;
}