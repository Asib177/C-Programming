#include <stdio.h>
#include <ctype.h>

int main()
{
    char str1[100] = "RaKiBul AsIB RedOy";
    // gets(str1);

    int i = 0;
    while (str1[i] != '\0')
    {
        if (islower(str1[i]))
        {
            str1[i] = toupper(str1[i]);
        }

        printf("%c", str1[i]);
        i++;
    }

    return 0;
}