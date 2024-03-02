#include <stdio.h>
#include <ctype.h>

int main()
{
    char str1[100] = "Akib Zaman";

    int i = 0;
    while (str1[i] != '\0')
    {
        if (isupper(str1[i]))
        {
            str1[i] = tolower(str1[i]);
        }
        else
        {
            str1[i] = toupper(str1[i]);
        }

        printf("%c", str1[i]);
        i++;
    }

    return 0;
}