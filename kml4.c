#include <stdio.h>
#include <ctype.h>

int main()
{
    char s1[100] = "aKib Zaman";

    int i = 0;
    while (s1[i] != '\0')
    {
        if (isupper(s1[i]))
        {
            s1[i] = tolower(s1[i]);
        }
        else
        {
            s1[i] = toupper(s1[i]);
        }
        printf("%c", s1[i]);
        i++;
    }


    return 0;
}