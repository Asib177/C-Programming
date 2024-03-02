#include <stdio.h>
// #include<ctype.h>

// void 

int main()
{
    char a[1000];
    fgets(a, sizeof(a), stdin);
    puts(a);

    return 0;
}