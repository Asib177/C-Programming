#include <stdio.h>

int main()
{
    char str1[50] = "My name";
    char str2[] = " is Asib";

        int i = 0, len = 0;
    while (str1[i] != '\0')
    {
        i++;
        len++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[len + j] = str2[j];
        j++;
    }
    printf("str1= %s", str1);

    return 0;
}