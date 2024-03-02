#include <stdio.h>

int main()
{
    char str[100], ch;
    gets(str);

    int i = 0;
    int k = 0; // k count a/A
    int j = 0; // j count e/E

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'A')
            k++;
        else if (ch == 'e' || ch == 'E')
            j++;
        i++;
    }
    printf("A/a is: %d\n", k);
    printf("E/e is: %d", j);

    return 0;
}