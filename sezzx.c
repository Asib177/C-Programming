#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, vowel, conconent, digit, word, other;

    printf("Enter a string: ");
    gets(str);

    i = vowel = conconent = word = digit = other = 0;

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

            vowel++;

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            conconent++;

        else if (ch >= '0' && ch <= '9')
            digit++;

        else if (ch == ' ')
            word++;
        else
            other++;

        i++;
    }
    word++;

    printf("Number of voule: %d\n", vowel);
    printf("Number of conconent: %d\n", conconent);
    printf("Number of digit: %d\n", digit);
    printf("Number of word: %d\n", word);
    printf("Number of other: %d\n", other);

    return 0;
}