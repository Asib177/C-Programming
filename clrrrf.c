#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,a,b,c,choice;
do
{
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("pressing one add the two numbers\nenter one if you want to\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            {
                c=a+b;
                printf("the sum of the entered numbers%.1f\n\n:",c);
                break;
            }
        default:
            printf("you have entered an invalid");
            break;
    }
    clrscr();
}
while(i==1);
getch();
}