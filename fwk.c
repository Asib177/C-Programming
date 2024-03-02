#include<stdio.h>

void sumnumber(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum in function: %d",sum);
}
int main()
{
    int num[100],i,n;
    int sum=0;
    printf("Enter total number of input: ");
    scanf("%d",&n);
    printf("Enter input number");
    for(i=0;i<n;i++)
    {
        // printf("Input number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    printf("Sum in main: %d\n",sum);
    sumnumber(num,n);
  //  printf("%d",result);
    return 0;
}