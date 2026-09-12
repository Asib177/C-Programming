#include <stdio.h>

int main()
{
    // int x;
    // scanf("%x", &x);
    int x = 10;
    int *p = &x;
    
    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    printf("&*p = %d\n", &*p);
    
    printf("p = %p\n", (void *)p);
    printf("&*p = %p\n", (void *)&*p);

    return 0;
}