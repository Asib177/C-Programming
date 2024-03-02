#include <stdio.h>

int sum(int a,int b)
{
return a*b;

}
int main()
{
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    
    printf("Sum is: %d", sum(n1,n2));

    return 0;
}