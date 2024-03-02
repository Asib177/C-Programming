#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if(a>=90 && a<=100)
    {
        printf("A");
    }
    else if(a>=86 && a<=89)
    {
        printf("A-");
    }

     else if(a>=82 && a<=85)
    {
        printf("B+");
    }
    else if(a>=78 && a<=81)
    {
        printf("B");
    }
    else if(a>=74 && a<=77)
    {
        printf("B-");
    }
    else if(a>=70 && a<=73)
    {
        printf("C+");
    }
    else if(a>=66 && a<=69)
    {
        printf("C");
    }
    else if(a>=62 && a<=65)
    {
        printf("C-");
    }
    else if(a>=58 && a<=61)
    {
        printf("D+");
    }
    else if(a>=55 && a<=57)
    {
        printf("D");
    }else if(a<55)
    {
        printf("F");
    }
    return 0;
}
