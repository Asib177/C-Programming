#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any input: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upercase", ch);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is digit", ch);
    }
    else
    {
        printf("%c is special character", ch);
    }

    return 0;
}