#include <stdio.h>
void evenoddchecker(int);

int main()
{
    int n;
    scanf("%d", &n);

    evenoddchecker(n);

    return 0;
}

void evenoddchecker(int a){
    if(a%2==0)
    printf("%d is enen",a);
    else
    printf("%d is odd", a);
}
