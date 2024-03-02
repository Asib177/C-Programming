#include <stdio.h>

int main()
{
    char chr;
    printf("Enter Input: ");
    scanf("%c", &chr);

    if (chr >= 'A' && chr <= 'Z')
    {
        printf("%c is Uppercase", chr);
    }
    else if (chr >= 'a' && chr <= 'z')
    {
        printf("%c is lowercase", chr);
    }
    else if (chr >= '0' && chr <= '9')
    {
        printf("%c is digit", chr);
    }
    else
    {
        printf("%c is a special character", chr);
    }

    return 0;
}